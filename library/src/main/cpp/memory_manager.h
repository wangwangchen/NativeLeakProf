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
    MALLOC, FREE, CALLOC, REALLOC
};

namespace nlp {
    /**
     * 申请内存
     * @param method 方法地址
     * @param byteCount 申请的内存大小
     */
    void *invokeMalloc(void *method, size_t byteCount);

    void invokeFree(void *method, void *ptr);

    void *invokeCalloc(void *method, size_t itemCount, size_t itemSize);

    void *invokeRealloc(void *method, void *ptr, size_t byteCount);

    void *getHookMethod(std::string &libName, MemoryMethodType methodType);

    void initNLP();

}

#endif //NATIVELEAKPROF_MEMORY_MANAGER_H
