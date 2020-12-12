#include <jni.h>
#include <string>
#include <pthread.h>
#include <unistd.h>
#include <android/log.h>
#include <vector>
#include "../../../../library/src/main/cpp/nlp/Log.h"

void* dumpThreadEntry(void *argv) {
    while (true) {
        __android_log_print(ANDROID_LOG_INFO, "NativeLeakProf", "invoke system malloc");
        void *memory = malloc(1024);
//        free(memory);


        void *memory2 = calloc(1024, sizeof(int32_t));

        if (memory2) {
            void *newMemory2 = realloc(memory2, 10240);
//            free(newMemory2);
        }

        sleep(3);
    }
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_qiu_liang_leak_prof_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    pthread_t thd;
    int ret = pthread_create(&thd, NULL, dumpThreadEntry, NULL);

    return env->NewStringUTF(hello.c_str());
}