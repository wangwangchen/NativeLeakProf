#include <jni.h>
#include <string>
#include <pthread.h>
#include <unistd.h>
#include <android/log.h>

void* dumpThreadEntry(void *argv) {
    while (true) {
        __android_log_print(ANDROID_LOG_INFO, "NativeLeakProf", "invoke system malloc");
        void *memory = malloc(1024);
        free(memory);


//        void *memory = calloc(1024, 4);
////        free(memory);
//
//        void *newMemory = realloc(memory, 1024);
//        free(newMemory);

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