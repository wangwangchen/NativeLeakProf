//
// Created by chenwangwang on 2020/12/10.
//

#ifndef NATIVELEAKPROF_COMMON_JNI_H
#define NATIVELEAKPROF_COMMON_JNI_H

#include <jni.h>

extern JavaVM* javaVM;

extern jclass __java_string_class;
extern jmethodID  __java_jmethod_string_getBytes;
extern jmethodID  __java_jmethod_string_construct_by_bytes_charset;

void onJNILoad(JavaVM *vm, void *reserved);

jstring toJavaString(JNIEnv *env, const std::string &str);

jstring toJavaString(JNIEnv *env, const char *buffer, int length);

#endif //NATIVELEAKPROF_COMMON_JNI_H
