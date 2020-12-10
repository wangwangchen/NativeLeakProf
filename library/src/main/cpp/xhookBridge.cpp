//
// Created by chenwangwang on 2020/12/8.
//

#include <jni.h>
#include <string>
#include "xhook.h"
#include "malloc_method.h"
#include <android/log.h>
#include <map> // STL头文件没有扩展名.h
#include "malloc_method.h"
#include "memory_manager.h"

using namespace nlp;

extern "C"
JNIEXPORT void JNICALL
Java_com_qiu_liang_leak_XHook_register(JNIEnv *env, jclass clazz, jstring elf_file) {

    const char *elfFile = env->GetStringUTFChars(elf_file, 0);


    std::string libName = std::string(elfFile) + ".so";
    // 组装配置信息对象
    std::string soFile = ".*/" + std::string(elfFile) + "\\.so$";

    xhook_register(soFile.c_str(), "malloc", (void *) getHookMethod(libName, MALLOC), NULL);
    xhook_register(soFile.c_str(), "calloc",  (void *) getHookMethod(libName, CALLOC),  NULL);
    xhook_register(soFile.c_str(), "realloc", (void *) getHookMethod(libName, REALLOC), NULL);
    xhook_register(soFile.c_str(), "free", (void *) (void *) getHookMethod(libName, FREE), NULL);

    //hook now!
    xhook_refresh(1);

    env->ReleaseStringUTFChars(elf_file, elfFile);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_qiu_liang_leak_XHook_nativeInit(JNIEnv *env, jclass clazz) {
    // TODO: implement nativeInit()
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    nlp::initNLP();
    return JNI_VERSION_1_6;
}