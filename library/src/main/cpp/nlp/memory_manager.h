//
// Created by chenwangwang on 2020/12/10.
//

#ifndef NATIVELEAKPROF_MEMORY_MANAGER_H
#define NATIVELEAKPROF_MEMORY_MANAGER_H

#include <cstddef>
#include <string>
#include <stack>

namespace nlp {

#define SLOT_NUM 150         // 一共只有150个坑位

    /**
     * 内存操作函数类型
     */
    enum MemoryMethodType {
        MALLOC, FREE, CALLOC, REALLOC, MEMALIGN, ALIGNED_ALLOC, POSIX_MEMALIGN
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
    };

    /**
     * 申请内存
     * @param method 方法地址
     * @param byteCount 申请的内存大小
     */
    void *invokeMalloc(int32_t index, size_t byteCount);

    void invokeFree(int32_t index, void *ptr);

    void *invokeCalloc(int32_t index, size_t itemCount, size_t itemSize);

    void *invokeRealloc(int32_t index, void *ptr, size_t byteCount);

    void *invokeMemAlign(int32_t index, size_t boundary, size_t byteCount);

    void *invokeAlignedAlloc(int32_t index, size_t alignment, size_t byteCount);

    int invokePosixMemAlign(int32_t index, void **memptr, size_t boundary, size_t byteCount);

    LibWrapper *getHookMethod(std::string &libName);

    /**
     * 当前内存申请情况
     */
    std::string currentRecordInfoStr();

    void initNLP();



}

#endif //NATIVELEAKPROF_MEMORY_MANAGER_H
