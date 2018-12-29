//
// Created by putao on 2018/12/28.
//

#ifndef PRIVSDK_CONSTANTS_H
#define PRIVSDK_CONSTANTS_H

#include <android/log.h>

#define TAG "PrivClient"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__)
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__)


#define JAVA_BASE_PATH "com/privchat/sdk"
#define JAVA_BASE_MODEL_PATH JAVA_BASE_PATH "/model"

#endif //PRIVSDK_CONSTANTS_H
