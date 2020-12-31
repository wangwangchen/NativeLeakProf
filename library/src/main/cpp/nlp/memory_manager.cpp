#include "memory_manager.h"

namespace nlp {

    int32_t libIndex = 0;
    // 库index - 已申请的内存大小
    std::map<int32_t, shared_ptr<MallocList>> mallocRecordMap;
    LibWrapper libWrapperArray[SLOT_NUM];
    // 内存地址 - 申请的内存
    std::map<void *, shared_ptr<MallocInfo>> memoryPtrMap;
    threadsafe_queue<shared_ptr<MemoryStruct>> queue;

    /**
     * 处理内存操作
     */
    void handle(const shared_ptr<MemoryStruct>& memoryStruct) {
        if (memoryStruct->type == TYPE_MALLOC) {
            memoryPtrMap[memoryStruct->ptr] = make_shared<MallocInfo>(memoryStruct->trace, memoryStruct->byteCount);
            auto iterator = mallocRecordMap.find(memoryStruct->index);
            shared_ptr<MallocList> mallocList;
            if (iterator == mallocRecordMap.end()) {
                mallocList = make_shared<MallocList>();
                mallocRecordMap[memoryStruct->index] = mallocList;
            } else {
                mallocList = iterator->second;
            }
            mallocList->mallocSize += memoryStruct->byteCount;
            mallocList->set->insert(memoryStruct->trace);
            auto libWrapper = &libWrapperArray[memoryStruct->index];
            std::string libName = libWrapper->libName;
            if ("libappLib.so" == libName) {
                memoryStruct->trace->log();
            }
        } else {
            auto listIterator = mallocRecordMap.find(memoryStruct->index);
            auto infoIterator = memoryPtrMap.find(memoryStruct->ptr);
            if (listIterator != mallocRecordMap.end() && infoIterator != memoryPtrMap.end()) {
                shared_ptr<MallocList> mallocList = listIterator->second;
                shared_ptr<MallocInfo> mallocInfo = infoIterator->second;
                mallocList->mallocSize -= mallocInfo->mallocSize;
                mallocList->set->erase(mallocInfo->mallocStack);
            }
            memoryPtrMap.erase(memoryStruct->ptr);
        }
    }

    void *invokeMalloc(int32_t index, size_t byteCount) {
        void *ptr = malloc(byteCount);
        onMalloc(index, ptr, byteCount, queue)
        return ptr;
    }

    void invokeFree(int32_t index, void *ptr) {
        free(ptr);
        onFree(index, ptr, queue)
    }

    void *invokeCalloc(int32_t index, size_t itemCount, size_t itemSize) {
        void *ptr = calloc(itemCount, itemSize);
        size_t byteCount = (itemCount * itemSize);
        onMalloc(index, ptr, byteCount, queue)
        return ptr;
    }

    void *invokeRealloc(int32_t index, void *oldPtr, size_t byteCount) {
        void *ptr = realloc(oldPtr, byteCount);
        onFree(index, oldPtr, queue)
        onMalloc(index, ptr, byteCount, queue)
        return ptr;
    }

    void *invokeMemAlign(int32_t index, size_t boundary, size_t byteCount) {
        void *ptr = memalign(boundary, byteCount);
        onMalloc(index, ptr, byteCount, queue)
        return ptr;
    }

    void *invokeAlignedAlloc(int32_t index, size_t alignment, size_t byteCount) {
        return invokeMemAlign(index, alignment, byteCount);
    }

    int invokePosixMemAlign(int32_t index, void **memptr, size_t boundary, size_t byteCount) {
        int ret = posix_memalign(memptr, boundary, byteCount);
        void *ptr = *memptr;
        if (!ret) {
            onMalloc(index, ptr, byteCount, queue)
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

    [[noreturn]] void* handleThread(__unused void *argv) {
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
        pthread_create(&thd, nullptr, handleThread, nullptr);
    }

    bool cmp(const pair<int32_t, shared_ptr<MallocList>> &p1, const pair<int32_t, shared_ptr<MallocList>> &p2) {
        return p1.second->mallocSize > p2.second->mallocSize;
    }

    std::string currentRecordInfoStr() {
//        _LOGI_("dump currentRecordInfoStr, queue size: %d", queue.size());
        // 处理所有数据
        std::unordered_set<shared_ptr<MemoryStruct>> localSet;
        queue.drop(localSet);
        for (auto &item : localSet) {
            handle(item);
        }
        localSet.clear();

        std::map<int32_t, shared_ptr<MallocList>> localMap = mallocRecordMap;

        std::string result;

        int64_t totalByteCount = 0;
        std::map<int32_t , shared_ptr<MallocList>>::iterator iterator;
        vector<pair<int32_t, shared_ptr<MallocList>> > arr;
        iterator = localMap.begin();
        bool isFind = false;
        while (iterator != localMap.end()) {
            if (iterator->second->mallocSize > 0) {
                isFind = true;
                totalByteCount += iterator->second->mallocSize;
                arr.emplace_back(iterator->first, iterator->second);
            }
            iterator++;
        }

        sort(arr.begin(), arr.end(), cmp);
        for (auto & it : arr) {
            auto libWrapper = &libWrapperArray[it.first];
            std::string libName = libWrapper->libName;
            result += (libName + " leak: " + convertAutoUnit(it.second->mallocSize) + "\n");
        }

        if (isFind) {
            return result + "\ntotal leak: " + nlp::convertAutoUnit(totalByteCount);
        } else {
            return "leak map is empty";
        }
    }

}