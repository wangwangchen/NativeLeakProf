//
// Created by chenwangwang on 2020/12/10.
//

#include <string>
#include "common-jni.h"

JavaVM* javaVM;

jclass __java_string_class;
jmethodID  __java_jmethod_string_getBytes;
jmethodID  __java_jmethod_string_construct_by_bytes_charset;

void onJNILoad(JavaVM *vm, void *reserved) {
    javaVM = vm;

    JNIEnv* env = nullptr;

    vm->GetEnv((void**)&env, JNI_VERSION_1_6);

    __java_string_class = static_cast<jclass>(env->NewGlobalRef(env->FindClass("java/lang/String")));
    __java_jmethod_string_construct_by_bytes_charset = env->GetMethodID(__java_string_class, "<init>", "([BLjava/lang/String;)V");
    __java_jmethod_string_getBytes = env->GetMethodID(__java_string_class, "getBytes", "(Ljava/lang/String;)[B");
}

jstring toJavaString(JNIEnv* env, const char *buffer, int length) {
    jbyteArray bytes = env->NewByteArray(length);
    env->SetByteArrayRegion(bytes, 0, length, (jbyte *)buffer);
    jstring encoding = env->NewStringUTF("utf-8");
    jstring result = (jstring)env->NewObject(__java_string_class, __java_jmethod_string_construct_by_bytes_charset, bytes, encoding);
    env->DeleteLocalRef(encoding);
    env->DeleteLocalRef(bytes);
    return result;
}

jstring toJavaString(JNIEnv* env, const std::string& str) {
    return toJavaString(env, str.c_str(), str.length());
}