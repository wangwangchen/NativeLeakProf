#include <jni.h>
#include <string>
#include <pthread.h>
#include <unistd.h>
#include <android/log.h>
#include <thread>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"

void method4() {
    void *memory = malloc(1024);
    malloc(1024);
    malloc(1024);malloc(1024);malloc(1024);malloc(1024);
//    free(memory);
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_qiu_liang_leak_prof_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    new std::thread([&]{
//        while (true) {
            sleep(6);
            method4();
//        }
    });


    return env->NewStringUTF(hello.c_str());
}
#pragma clang diagnostic pop