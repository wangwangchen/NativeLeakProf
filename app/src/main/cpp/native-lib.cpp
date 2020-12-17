#include <jni.h>
#include <string>
#include <pthread.h>
#include <unistd.h>
#include <android/log.h>
#include <vector>
#include <thread>


std::thread *th;

extern "C" JNIEXPORT jstring JNICALL
Java_com_qiu_liang_leak_prof_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    th = new std::thread([&]{
        while (true) {
            void *memory = malloc(1024);
            free(memory);
            sleep(1);
        }
    });

    return env->NewStringUTF(hello.c_str());
}