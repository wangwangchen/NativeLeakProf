//
// Created by chenwangwang on 2020/12/10.
//

#include "memory_manager.h"
#include "Log.h"
#include "malloc_method.h"
#include "free_method.h"
#include "calloc_method.h"
#include "realloc_method.h"

namespace nlp {

    // 函数地址 - 库名
    std::map<void *, std::string> libNameMap;
    // 内存地址 - 库名
    std::map<void *, std::pair<std::string, int64_t>> memoryPtrMap;
    // 库名 - 已申请的内存大小
    std::map<std::string, int64_t> mallocRecordMap;

    void onMalloc(std::string &libName, void *ptr, size_t byteCount) {
        if (ptr) {
            memoryPtrMap[ptr] = std::pair<std::string, int64_t>(libName, byteCount);
            mallocRecordMap[libName] += byteCount;
        }
    }

    void *invokeMalloc(void *method, size_t byteCount) {
        void *ptr = malloc(byteCount);
        std::basic_string<char, std::char_traits<char>, std::allocator<char>> &libName = libNameMap[method];
        _LOGI_("lib: %s, malloc %zu byte, return %p", libName.c_str(), byteCount, ptr);

        onMalloc(libName, ptr, byteCount);

        return ptr;
    }

    void onFree(std::string &libName, void *ptr) {
        std::pair<std::string, int64_t> &pair = memoryPtrMap[ptr];
        mallocRecordMap[libName] -= pair.second;
        memoryPtrMap.erase(ptr);
    }

    void invokeFree(void *method, void *ptr) {
        std::basic_string<char, std::char_traits<char>, std::allocator<char>> &libName = libNameMap[method];
        _LOGI_("lib: %s, free %p", libName.c_str(), ptr);
        free(ptr);

        onFree(libName, ptr);
    }

    void *invokeCalloc(void *method, size_t itemCount, size_t itemSize) {
        void *ptr = calloc(itemCount, itemSize);
        std::basic_string<char, std::char_traits<char>, std::allocator<char>> &libName = libNameMap[method];
        size_t byteCount = (itemCount * itemSize);
        _LOGI_("lib: %s, calloc %zu byte, return %p", libName.c_str(), byteCount, ptr);

        onMalloc(libName, ptr, itemCount * itemSize);

        return ptr;
    }

    void *invokeRealloc(void *method, void *ptr, size_t byteCount) {
        void * newPtr = realloc(ptr, byteCount);

        std::basic_string<char, std::char_traits<char>, std::allocator<char>> &libName = libNameMap[method];
        _LOGI_("lib: %s, realloc %p return %p", libName.c_str(), ptr, newPtr);

        onFree(libName, ptr);

        onMalloc(libName, newPtr, byteCount);

        return newPtr;
    }

    void *getHookMethod(std::string &libName, MemoryMethodType methodType) {
        void *method;
        switch (methodType) {
            case MALLOC:
                method = popMallocMethod(libName);
                break;
            case FREE:
                method = popFreeMethod(libName);
                break;
            case CALLOC:
                method = popCallocMethod(libName);
                break;
            case REALLOC:
                method = popReallocMethod(libName);
                break;
        }
        libNameMap[method] = libName;
        return method;
    }

    void initNLP() {
        initDiyMallocMethod();
        initDiyFreeMethod();
        initDiyCallocMethod();
        initDiyReallocMethod();
    }
}