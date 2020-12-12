//
// Created by chenwangwang on 2020/12/10.
//

#ifndef NATIVELEAKPROF_MEMORY_MANAGER_H
#define NATIVELEAKPROF_MEMORY_MANAGER_H

#include <cstddef>
#include <string>
#include <stack>

/**
 * 内存操作函数类型
 */
enum MemoryMethodType {
    MALLOC, FREE, CALLOC, REALLOC, MEMALIGN, ALIGNED_ALLOC, POSIX_MEMALIGN
};

namespace nlp {

    class MemoryOperation {
    public:
        void *method;
        virtual ~MemoryOperation(){}
    };

    class MallocOperation : public MemoryOperation {
    public:
        void* ptr;
        size_t byteCount;
    };

    class FreeOperation : public MemoryOperation {
    public:
        void *ptr;
    };

    /**
     * 申请内存
     * @param method 方法地址
     * @param byteCount 申请的内存大小
     */
    void *invokeMalloc(void *method, size_t byteCount);

    void invokeFree(void *method, void *ptr);

    void *invokeCalloc(void *method, size_t itemCount, size_t itemSize);

    void *invokeRealloc(void *method, void *ptr, size_t byteCount);

    void *invokeMemAlign(void *method, size_t boundary, size_t byteCount);

    void *invokeAlignedAlloc(void *method, size_t alignment, size_t byteCount);

    int invokePosixMemAlign(void *method, void **memptr, size_t boundary, size_t byteCount);

    void *getHookMethod(std::string &libName, MemoryMethodType methodType);

    void resetHookMethods();

    /**
     * 当前内存申请情况
     */
    std::string currentRecordInfoStr();

    void initNLP();



}

#endif //NATIVELEAKPROF_MEMORY_MANAGER_H
