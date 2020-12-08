//
// Created by chenwangwang on 2020/12/8.
//

#include <jni.h>
#include <string>
#include "xhook.h"
#include <android/log.h>

#define TAG_ "NativeLeakProf"

extern "C"
JNIEXPORT void JNICALL
Java_com_qiu_liang_leak_XHook_nativeInit(JNIEnv *env, jclass clazz) {
// TODO: implement nativeInit()


}

void* my_calloc(size_t __item_count, size_t __item_size) {
    __android_log_print(ANDROID_LOG_INFO, TAG_, "my_calloc");
    return calloc(__item_count, __item_size);
}

void my_free(void* __ptr) {
    __android_log_print(ANDROID_LOG_INFO, TAG_, "my_free");
    return free(__ptr);
}

void* my_realloc(void* __ptr, size_t __byte_count) {
    __android_log_print(ANDROID_LOG_INFO, TAG_, "my_realloc");
    return realloc(__ptr, __byte_count);
}

void* my_malloc(size_t __byte_count) {
    __android_log_print(ANDROID_LOG_INFO, TAG_, "my_malloc");
    return malloc(__byte_count);
}

static int my_libtest_log_print(int prio, const char* tag, const char* fmt, ...)
{
    va_list ap;
    char buf[1024];
    int r;

    snprintf(buf, sizeof(buf), "[%s] %s", (NULL == tag ? "" : tag), (NULL == fmt ? "" : fmt));

    va_start(ap, fmt);
    r = __android_log_vprint(prio, "xhook_libtest", buf, ap);
    va_end(ap);
    return r;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_qiu_liang_leak_XHook_register(JNIEnv *env, jclass clazz, jstring elf_file) {

    const char *elfFile = env->GetStringUTFChars(elf_file, 0);

    // 组装配置信息对象
    std::string soFile = ".*/" + std::string(elfFile) + "\\.so$";

    __android_log_print(ANDROID_LOG_INFO, TAG_, "%s", soFile.c_str());

    xhook_register(soFile.c_str(), "malloc",  (void *) my_malloc,  NULL);
//    xhook_register(".*/libappLib\\.so$", "__android_log_print", (void *) my_libtest_log_print, NULL);
    xhook_register(soFile.c_str(), "calloc",  (void *) my_calloc,  NULL);
    xhook_register(soFile.c_str(), "realloc", (void *) my_realloc, NULL);
    xhook_register(soFile.c_str(), "free",    (void *) my_free,    NULL);

    //hook now!
    xhook_refresh(1);

    env->ReleaseStringUTFChars(elf_file, elfFile);
}