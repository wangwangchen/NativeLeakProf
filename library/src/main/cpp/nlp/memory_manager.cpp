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

namespace nlp {

    // 函数地址 - 库名
    std::map<void *, std::string> libNameMap;
    // 内存地址 - 库名
    std::map<void *, std::pair<std::string, int64_t>> memoryPtrMap;
    // 库名 - 已申请的内存大小
    std::map<std::string, int64_t> mallocRecordMap;
    threadsafe_queue<MemoryOperation*> queue;

    void onMalloc(void *method, void *ptr, size_t byteCount) {
        if (ptr) {
            auto *mallocOperation = new MallocOperation();
            mallocOperation->method = method;
            mallocOperation->ptr = ptr;
            mallocOperation->byteCount = byteCount;
            queue.push(mallocOperation);
        }
    }

    void *invokeMalloc(void *method, size_t byteCount) {
        void *ptr = malloc(byteCount);
//        _LOGII_("lib: %s, malloc %zu byte, return %p", libName.c_str(), byteCount, ptr);

        onMalloc(method, ptr, byteCount);

        return ptr;
    }

    void onFree(void *method, void *ptr) {
        auto *freeOperation = new FreeOperation();
        freeOperation->method = method;
        freeOperation->ptr = ptr;
        queue.push(freeOperation);
    }

    void invokeFree(void *method, void *ptr) {
//        _LOGII_("lib: %s, free %p", libName.c_str(), ptr);
        free(ptr);

        onFree(method, ptr);
    }

    void *invokeCalloc(void *method, size_t itemCount, size_t itemSize) {
        void *ptr = calloc(itemCount, itemSize);
        size_t byteCount = (itemCount * itemSize);
//        _LOGII_("lib: %s, calloc %zu byte, return %p", libName.c_str(), byteCount, ptr);

        onMalloc(method, ptr, byteCount);

        return ptr;
    }

    void *invokeRealloc(void *method, void *ptr, size_t byteCount) {
        void * newPtr = realloc(ptr, byteCount);

        std::basic_string<char, std::char_traits<char>, std::allocator<char>> &libName = libNameMap[method];
//        _LOGII_("lib: %s, realloc %p return %p", libName.c_str(), ptr, newPtr);

        onFree(method, ptr);

        onMalloc(method, newPtr, byteCount);

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
//        _LOGII_("lib: %s, getHookMethod %p methodType %d", libName.c_str(), method, methodType);
        return method;
    }

    void resetHookMethods() {
        libNameMap.clear();
        resetMallocMethod();
        resetFreeMethod();
        resetCallocMethod();
        resetReallocMethod();
        while (true) {
            if (queue.empty()) {
                return;
            }
        }
    }

    [[noreturn]] void* dumpThreadEntry(__unused void *argv) {
        while (true) {
            MemoryOperation *operation = queue.wait_and_pop();

            auto *mallocOperation = dynamic_cast<MallocOperation*>(operation);
            if (mallocOperation != nullptr) {
//                _LOGI_("dumpThreadEntry matched MallocOperation type id");
                std::basic_string<char, std::char_traits<char>, std::allocator<char>> &libName = libNameMap[mallocOperation->method];
                memoryPtrMap[mallocOperation->ptr] = std::pair<std::string, int64_t>(libName, mallocOperation->byteCount);
                mallocRecordMap[libName] += mallocOperation->byteCount;
                continue;
            }

            auto *freeOperation = dynamic_cast<FreeOperation *>(operation);
            if (freeOperation != nullptr) {
//                _LOGI_("dumpThreadEntry matched FreeOperation type id");
                std::basic_string<char, std::char_traits<char>, std::allocator<char>> &libName = libNameMap[freeOperation->method];
                std::pair<std::string, int64_t> &pair = memoryPtrMap[freeOperation->ptr];
                mallocRecordMap[libName] -= pair.second;
                memoryPtrMap.erase(freeOperation->ptr);
                continue;
            }

            _LOGI_("dumpThreadEntry not matched type id");

            delete operation;
        }
    }

    void initNLP() {
        initDiyMallocMethod();
        initDiyFreeMethod();
        initDiyCallocMethod();
        initDiyReallocMethod();
        pthread_t thread;
        pthread_create(&thread, nullptr, dumpThreadEntry, nullptr);
    }

    std::string currentRecordInfoStr() {
        std::map<std::string, int64_t> localMap = mallocRecordMap;

        std::string result;

        std::map<std::string, int64_t>::iterator iterator;
        iterator = localMap.begin();
        bool isFind = false;
        while (iterator != localMap.end()) {
            if (iterator->second > 0) {
                result += (iterator->first + " leak: " + std::to_string(iterator->second) + " byte \n");
                isFind = true;
            }
            iterator++;
        }

        if (isFind) {
            return result;
        } else {
            return "leak map is empty";
        }
    }

}