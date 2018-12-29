LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_CPPFLAGS := -std=c++11 -fexceptions -frtti
LOCAL_MODULE := testjni
LOCAL_SRC_FILES := $(TARGET_ARCH_ABI)/libtestjni.so
include $(PREBUILT_SHARED_LIBRARY)

