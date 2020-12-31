//
// Created by chenwangwang on 2020/12/10.
//

#ifndef NATIVELEAKPROF_MEMORY_MANAGER_H
#define NATIVELEAKPROF_MEMORY_MANAGER_H

#include <cstddef>
#include <string>
#include <stack>
#include <elf.h>
#include "Log.h"
#include "malloc_method.h"
#include "free_method.h"
#include "calloc_method.h"
#include "realloc_method.h"
#include "memalign_method.h"
#include "posix_memalign_method.h"
#include "aligned_alloc_method.h"
#include "unit.h"
#include <unordered_set>
#include <utility>
#include <thread>
#include <stdint.h>
#include "unwind_.h"
#include "threadsafe_queue.h"

namespace nlp {

#define SLOT_NUM 500         // 一共只有500个坑位
#define TYPE_MALLOC 0
#define TYPE_FREE 1
#define SKIP_COUNT 2

    using namespace std;

    class MallocList {
    public:
        int64_t mallocSize;
        shared_ptr<unordered_set<shared_ptr<Backtrace>>> set = make_shared<unordered_set<shared_ptr<Backtrace>>>();
    };

    class MallocInfo {
    public:
        int64_t mallocSize;
        shared_ptr<Backtrace> mallocStack;

        MallocInfo(const shared_ptr<Backtrace> &mallocStack, int64_t mallocSize)
                : mallocStack(mallocStack), mallocSize(mallocSize) {}
    };

    struct LibWrapper {
        void *malloc;
        void *calloc;
        void *realloc;
        void *alignedAlloc;
        void *memalign;
        void *posixMemAlign;
        void *free;
        int index;
        std::string libName;
        std::string libFullName;
        uintptr_t startAddress;
        uintptr_t endAddress;
        uintptr_t offset;
    };

    struct MemoryStruct {
        uint32_t type;
        void *ptr;
        size_t byteCount;
        int32_t index;
        shared_ptr<Backtrace> trace;
    };

#define onMalloc(index, ptr, byteCount, queue)                                              \
    if (ptr) {                                                                              \
        shared_ptr<Backtrace> trace = backtrace(15, SKIP_COUNT);                            \
        auto mallocStruct = make_shared<MemoryStruct>();                                    \
        mallocStruct->type = TYPE_MALLOC;                                                   \
        mallocStruct->index = index;                                                        \
        mallocStruct->ptr = ptr;                                                            \
        mallocStruct->byteCount = byteCount;                                                \
        mallocStruct->trace = trace;                                                        \
        queue.push(mallocStruct);                                                           \
    }                                                                                       \
                                                                                            \

#define onFree(index, ptrToFree, queue)                                                   \
    auto freeStruct = make_shared<MemoryStruct>();                                        \
    freeStruct->type = TYPE_FREE;                                                         \
    freeStruct->index = index;                                                            \
    freeStruct->ptr = ptrToFree;                                                          \
    queue.push(freeStruct);                                                               \


    /**
     * 申请内存
     * @param method 方法地址
     * @param byteCount 申请的内存大小
     */
    void *invokeMalloc(int32_t index, size_t byteCount);

    void invokeFree(int32_t index, void *ptr);

    void *invokeCalloc(int32_t index, size_t itemCount, size_t itemSize);

    void *invokeRealloc(int32_t index, void *oldPtr, size_t byteCount);

    void *invokeMemAlign(int32_t index, size_t boundary, size_t byteCount);

    void *invokeAlignedAlloc(int32_t index, size_t alignment, size_t byteCount);

    int invokePosixMemAlign(int32_t index, void **memptr, size_t boundary, size_t byteCount);

    LibWrapper *getHookMethod(const std::string& libName);

    /**
     * 当前内存申请情况
     */
    std::string currentRecordInfoStr();

    void initNLP();



}

#endif //NATIVELEAKPROF_MEMORY_MANAGER_H
