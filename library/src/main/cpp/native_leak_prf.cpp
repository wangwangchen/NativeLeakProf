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
#include "nlp/malloc_method.h"
#include "nlp/memory_manager.h"
#include "nlp/Log.h"
#include "nlp/common-jni.h"

using namespace nlp;
using namespace std;

extern "C"
JNIEXPORT void JNICALL
Java_com_qiu_liang_leak_XHook_hookELF(JNIEnv *env, jclass clazz, jstring elf_file) {

    const char *elfFile = env->GetStringUTFChars(elf_file, 0);

    _LOGI_("Fuck");

    std::string libName = std::string(elfFile) + ".so";
    // 组装配置信息对象
    std::string soFile = ".*/" + std::string(elfFile) + "\\.so$";

    xhook_register(soFile.c_str(), "malloc", (void *) getHookMethod(libName, MALLOC), NULL);
    xhook_register(soFile.c_str(), "calloc",  (void *) getHookMethod(libName, CALLOC),  NULL);
    xhook_register(soFile.c_str(), "realloc", (void *) getHookMethod(libName, REALLOC), NULL);
    xhook_register(soFile.c_str(), "free", (void *) (void *) getHookMethod(libName, FREE), NULL);

    env->ReleaseStringUTFChars(elf_file, elfFile);

}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_qiu_liang_leak_XHook_dumpLeakInfo(JNIEnv *env, jclass clazz) {
    std::string leakInfo = currentRecordInfoStr();
    return toJavaString(env, leakInfo);
}

extern "C"
JNIEXPORT void JNICALL
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
        return;
    }

//    xhook_enable_debug(1);
//    xhook_enable_sigsegv_protection(1);
    xhook_clear();

    resetHookMethods();

    auto iterator = lib_names_vector.begin();

    while (iterator != lib_names_vector.end()) {
        auto elfFile = iterator->c_str();
        std::string libName = std::string(elfFile) + ".so";
        // 组装配置信息对象
        std::string soFile = ".*/" + std::string(elfFile) + "\\.so$";

        xhook_register(soFile.c_str(), "malloc", (void *) getHookMethod(libName, MALLOC), NULL);
        xhook_register(soFile.c_str(), "calloc",  (void *) getHookMethod(libName, CALLOC),  NULL);
        xhook_register(soFile.c_str(), "realloc", (void *) getHookMethod(libName, REALLOC), NULL);
        xhook_register(soFile.c_str(), "free", (void *) (void *) getHookMethod(libName, FREE), NULL);

        iterator++;
    }

    xhook_refresh(0);
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    onJNILoad(vm, reserved);
    nlp::initNLP();

    return JNI_VERSION_1_6;
}