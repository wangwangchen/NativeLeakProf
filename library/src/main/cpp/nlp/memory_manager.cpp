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
#include <thread>

namespace nlp {

    using namespace std;

    int32_t libIndex = 0;
    LibWrapper libWrapperArray[SLOT_NUM];
    // 内存地址 - 库名
    std::map<void *, int64_t> memoryPtrMap;
    // 库名 - 已申请的内存大小
    std::map<std::string, int64_t> mallocRecordMap;

    struct MemoryStruct {
        uint32_t type;
        void *ptr;
        size_t byteCount;
        int32_t index;
    };

    /**
     * 处理内存操作
     */
    void handle(MemoryStruct *memoryStruct) {
        if (memoryStruct->type == TYPE_MALLOC) {
            auto libWrapper = &libWrapperArray[memoryStruct->index];
            std::string libName = libWrapper->libName;
            memoryPtrMap[memoryStruct->ptr] = memoryStruct->byteCount;
            mallocRecordMap[libName] += memoryStruct->byteCount;
        } else {
            auto libWrapper = &libWrapperArray[memoryStruct->index];
            std::string libName = libWrapper->libName;
            mallocRecordMap[libName] -= memoryPtrMap[memoryStruct->ptr];
            memoryPtrMap.erase(memoryStruct->ptr);
        }
        free(memoryStruct);
    }

    threadsafe_queue<MemoryStruct *> queue;

    void onMalloc(int32_t index, void *ptr, size_t byteCount) {
        if (ptr) {
            auto * mallocStruct = static_cast<MemoryStruct *>(malloc(sizeof(MemoryStruct)));
            mallocStruct->type = TYPE_MALLOC;
            mallocStruct->index = index;
            mallocStruct->ptr = ptr;
            mallocStruct->byteCount = byteCount;
            queue.push(mallocStruct);
        }
    }

    void *invokeMalloc(int32_t index, size_t byteCount) {
        void *ptr = malloc(byteCount);
        onMalloc(index, ptr, byteCount);
        return ptr;
    }

    void onFree(int32_t index, void *ptr) {
        auto * mallocStruct = static_cast<MemoryStruct *>(malloc(sizeof(MemoryStruct)));
        mallocStruct->type = TYPE_FREE;
        mallocStruct->index = index;
        mallocStruct->ptr = ptr;
        queue.push(mallocStruct);
    }

    void invokeFree(int32_t index, void *ptr) {
        free(ptr);
        onFree(index, ptr);
    }

    void *invokeCalloc(int32_t index, size_t itemCount, size_t itemSize) {
        void *ptr = calloc(itemCount, itemSize);
        size_t byteCount = (itemCount * itemSize);
        onMalloc(index, ptr, byteCount);
        return ptr;
    }

    void *invokeRealloc(int32_t index, void *ptr, size_t byteCount) {
        void *newPtr = realloc(ptr, byteCount);
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

//        _LOGI_("lib: %s, getHookMethod %d", libName.c_str(), index);
        return libWrapper;
    }

    [[noreturn]] void* handleThread(void *argv) {
        while (true) {
            handle(queue.wait_and_pop());
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
        pthread_t thd;
        pthread_create(&thd, NULL, handleThread, NULL);
    }

    bool cmp(const pair<std::string, int64_t> &p1, const pair<std::string, int64_t> &p2) {
        return p1.second > p2.second;
    }

    std::string currentRecordInfoStr() {
//        _LOGI_("dump currentRecordInfoStr, queue size: %d", queue.size());
        // 处理所有数据
        std::unordered_set<MemoryStruct *> localSet;
        queue.drop(localSet);
        for (auto &item : localSet) {
            handle(item);
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