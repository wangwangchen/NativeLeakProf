//
// Created by chenwangwang on 2020/12/10.
//

#ifndef NATIVELEAKPROF_LOG_H
#define NATIVELEAKPROF_LOG_H

#include "android/log.h"
#define TAG_ "NativeLeakProf"

#define _LOGI_(...) __android_log_print(ANDROID_LOG_INFO, TAG_, __VA_ARGS__)
#define _LOGE_(...) __android_log_print(ANDROID_LOG_ERROR, TAG_, __VA_ARGS__)

#endif //NATIVELEAKPROF_LOG_H
