//
// Created by chenwangwang on 2020/12/8.
//

#include <jni.h>
#include <string>
#include "xhook/xhook.h"
#include "nlp/malloc_method.h"
#include <android/log.h>
#include <map> // STL头文件没有扩展名.h
#include <pthread.h>
#include <unistd.h>
#include <vector>
#include <cerrno>
#include "nlp/malloc_method.h"
#include "nlp/memory_manager.h"
#include "nlp/Log.h"
#include "nlp/common-jni.h"

using namespace nlp;
using namespace std;

extern "C"
JNIEXPORT jstring JNICALL
Java_com_qiu_liang_leak_XHook_dumpLeakInfo(JNIEnv *env, jclass clazz) {
    std::string leakInfo = currentRecordInfoStr();
    return toJavaString(env, leakInfo);
}

extern "C"
JNIEXPORT jboolean JNICALL
Java_com_qiu_liang_leak_XHook_hookELFs(JNIEnv *env, jclass clazz, jobjectArray elf_file_array) {
    jsize length = env->GetArrayLength(elf_file_array);

    std::vector<std::string> lib_names_vector;

    for (int i = 0; i < length; ++i) {
        auto lib_name = static_cast<jstring>(env->GetObjectArrayElement(elf_file_array, i));
        const char *str = env->GetStringUTFChars(lib_name, 0);
        lib_names_vector.emplace_back(str);
        env->ReleaseStringUTFChars(lib_name, str);
    }

    if (lib_names_vector.empty()) {
        _LOGE_("empty libs");
        return false;
    }

//    xhook_enable_debug(1);
//    xhook_enable_sigsegv_protection(1);
    xhook_clear();

//    resetHookMethods();

    auto iterator = lib_names_vector.begin();

    while (iterator != lib_names_vector.end()) {
        auto elfFile = iterator->c_str();
        std::string libName = std::string(elfFile) + ".so";
        // 组装配置信息对象
        std::string soFile = ".*/" + std::string(elfFile) + "\\.so$";

        auto libWrapper = getHookMethod(libName);
        if (!libWrapper) {
            _LOGE_("memory method out of index");
            return false;
        }

        xhook_register(soFile.c_str(), "malloc", (void *) libWrapper->malloc, nullptr);
        xhook_register(soFile.c_str(), "calloc",  (void *) libWrapper->calloc,  nullptr);
        xhook_register(soFile.c_str(), "realloc", (void *) libWrapper->realloc, nullptr);
        xhook_register(soFile.c_str(), "free", (void *) libWrapper->free, nullptr);
        xhook_register(soFile.c_str(), "memalign", (void *) libWrapper->memalign, nullptr);
        xhook_register(soFile.c_str(), "aligned_alloc", (void *) libWrapper->alignedAlloc, nullptr);
        xhook_register(soFile.c_str(), "posix_memalign", (void *) libWrapper->posixMemAlign, nullptr);

        iterator++;
    }

    xhook_refresh(0);

    return true;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    onJNILoad(vm, reserved);
    nlp::initNLP();

    return JNI_VERSION_1_6;
}