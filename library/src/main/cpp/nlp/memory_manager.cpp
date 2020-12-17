#include <elf.h>
//
// Created by chenwangwang on 2020/12/10.
//

#include "memory_manager.h"
#include "Log.h"
#include "malloc_method.h"
#include "free_method.h"
#include "calloc_method.h"
#include "realloc_method.h"
#include "threadsafe_queue.h"
#include "memalign_method.h"
#include "posix_memalign_method.h"
#include "aligned_alloc_method.h"
#include "unit.h"
#include <unordered_set>
#include <utility>

namespace nlp {

    using namespace std;

    class MemoryOperation {
    public:
        int32_t index;

        explicit MemoryOperation(int32_t index)
                : index(index) {}

        virtual ~MemoryOperation() = default;
    };

    class MallocOperation : public MemoryOperation {
    public:
        void *ptr;
        size_t byteCount;
        MallocOperation(int32_t index, void *ptr, size_t byteCount) : MemoryOperation(index),
                                                                      ptr(ptr),
                                                                      byteCount(byteCount) {}
    };

    class FreeOperation : public MemoryOperation {
    public:
        FreeOperation(int32_t index, void *ptr) : MemoryOperation(index), ptr(ptr) {}

        void *ptr;
    };

    int32_t libIndex = 0;
    LibWrapper libWrapperArray[SLOT_NUM];
    // 内存地址 - 库名
    std::map<void *, int64_t> memoryPtrMap;
    // 库名 - 已申请的内存大小
    std::map<std::string, int64_t> mallocRecordMap;
    threadsafe_queue<MemoryOperation *> queue;

    void onMalloc(int32_t index, void *ptr, size_t byteCount) {
        if (ptr) {
            auto *mallocOperation = new MallocOperation(index, ptr, byteCount);
            queue.push(mallocOperation);
        }
    }

    void *invokeMalloc(int32_t index, size_t byteCount) {
        void *ptr = malloc(byteCount);
//        _LOGII_("lib: %s, malloc %zu byte, return %p", libName.c_str(), byteCount, ptr);

        onMalloc(index, ptr, byteCount);

        return ptr;
    }

    void onFree(int32_t index, void *ptr) {
        auto *freeOperation = new FreeOperation(index, ptr);
        queue.push(freeOperation);
    }

    void invokeFree(int32_t index, void *ptr) {
//        _LOGII_("lib: %s, free %p", libName.c_str(), ptr);
        free(ptr);

        onFree(index, ptr);
    }

    void *invokeCalloc(int32_t index, size_t itemCount, size_t itemSize) {
        void *ptr = calloc(itemCount, itemSize);
        size_t byteCount = (itemCount * itemSize);
//        _LOGII_("lib: %s, calloc %zu byte, return %p", libName.c_str(), byteCount, ptr);

        onMalloc(index, ptr, byteCount);

        return ptr;
    }

    void *invokeRealloc(int32_t index, void *ptr, size_t byteCount) {
        void *newPtr = realloc(ptr, byteCount);

//        _LOGII_("lib: %s, realloc %p return %p", libName.c_str(), ptr, newPtr);

        onFree(index, ptr);

        onMalloc(index, newPtr, byteCount);

        return newPtr;
    }

    void *invokeMemAlign(int32_t index, size_t boundary, size_t byteCount) {
        void *ptr = memalign(boundary, byteCount);

        onMalloc(index, ptr, byteCount);

        return ptr;
    }

    void *invokeAlignedAlloc(int32_t index, size_t alignment, size_t byteCount) {
        return invokeMemAlign(index, alignment, byteCount);
    }

    int invokePosixMemAlign(int32_t index, void **memptr, size_t boundary, size_t byteCount) {
        int ret = posix_memalign(memptr, boundary, byteCount);

        if (!ret) {
            onMalloc(index, *memptr, byteCount);
        }

        return ret;
    }

    LibWrapper *getHookMethod(const std::string& libName) {
        for (int i = 0; i < libIndex; ++i) {
            auto libWrapper = &libWrapperArray[i];
            if (libName == libWrapper->libName) {
                return libWrapper;
            }
        }
        if (libIndex >= SLOT_NUM - 1) {
            return nullptr;
        }

        auto index = libIndex++;
        auto libWrapper = &libWrapperArray[index];
        libWrapper->malloc = popMallocMethod();
        libWrapper->free = popFreeMethod();
        libWrapper->calloc = popCallocMethod();
        libWrapper->realloc = popReallocMethod();
        libWrapper->memalign = popMemAlignMethod();
        libWrapper->alignedAlloc = popAlignedAllocMethod();
        libWrapper->posixMemAlign = popPosixMemAlignMethod();
        libWrapper->libName = libName;
        libWrapper->index = index;

        _LOGI_("lib: %s, getHookMethod %d", libName.c_str(), index);
        return libWrapper;
    }

    inline void handleMemoryOperate(MemoryOperation *operation) {
        auto *mallocOperation = dynamic_cast<MallocOperation *>(operation);
        if (mallocOperation != nullptr) {
//                _LOGI_("dumpThreadEntry matched MallocOperation type id");
            auto libWrapper = &libWrapperArray[mallocOperation->index];
            std::string libName = libWrapper->libName;
            memoryPtrMap[mallocOperation->ptr] = mallocOperation->byteCount;
            mallocRecordMap[libName] += mallocOperation->byteCount;
            return;
        }

        auto *freeOperation = dynamic_cast<FreeOperation *>(operation);
        if (freeOperation != nullptr) {
//                _LOGI_("dumpThreadEntry matched FreeOperation type id");
            auto libWrapper = &libWrapperArray[freeOperation->index];
            std::string libName = libWrapper->libName;
            mallocRecordMap[libName] -= memoryPtrMap[freeOperation->ptr];
            memoryPtrMap.erase(freeOperation->ptr);
            return;
        }

        _LOGE_("dumpThreadEntry not matched type id");
    }

    [[noreturn]] void *dumpThreadEntry(__unused void *argv) {
        while (true) {
            MemoryOperation *operation = queue.wait_and_pop();
            handleMemoryOperate(operation);
            delete operation;
//            _LOGE_("queue size: %d", queue.size());
        }
    }

    void initNLP() {
        initDiyMallocMethod();
        initDiyFreeMethod();
        initDiyCallocMethod();
        initDiyReallocMethod();
        initDiyMemAlignMethod();
        initDiyAlignedAllocMethod();
        initDiyPosixMemAlignMethod();
        pthread_t thread;
        pthread_create(&thread, nullptr, dumpThreadEntry, nullptr);
    }

    bool cmp(const pair<std::string, int64_t> &p1, const pair<std::string, int64_t> &p2) {
        return p1.second > p2.second;
    }

    std::string currentRecordInfoStr() {
        _LOGI_("dump currentRecordInfoStr, queue size: %d", queue.size());
        // 处理所有数据
        std::unordered_set<MemoryOperation *> localSet;
        queue.drop(localSet);
        for (auto &item : localSet) {
            handleMemoryOperate(item);
            delete item;
        }
        localSet.clear();

        std::map<std::string, int64_t> localMap = mallocRecordMap;

        std::string result;

        int64_t totalByteCount = 0;
        std::map<std::string, int64_t>::iterator iterator;
        vector<pair<std::string, int64_t> > arr;
        iterator = localMap.begin();
        bool isFind = false;
        while (iterator != localMap.end()) {
            if (iterator->second > 0) {
                isFind = true;
                totalByteCount += iterator->second;
                arr.emplace_back(iterator->first, iterator->second);
            }
            iterator++;
        }

        sort(arr.begin(), arr.end(), cmp);
        for (auto & it : arr) {
            result += (it.first + " leak: " + convertAutoUnit(it.second) + "\n");
        }

        if (isFind) {
            return result + "\ntotal leak: " + nlp::convertAutoUnit(totalByteCount);
        } else {
            return "leak map is empty";
        }
    }

}