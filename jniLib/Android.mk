LOCAL_PATH := $(call my-dir)

# #=================================================================================

# include $(CLEAR_VARS)
# LOCAL_MODULE := event
# LOCAL_SRC_FILES := $(LOCAL_PATH)/libevent/lib/android/$(TARGET_ARCH_ABI)/libevent2.a
# $(warning "$(LOCAL_MODULE): LOCAL_SRC_FILES =$(LOCAL_SRC_FILES)")   
# #include $(PREBUILT_SHARED_LIBRARY) 
# include $(PREBUILT_STATIC_LIBRARY)

# #=================================================================================

include $(CLEAR_VARS)
LOCAL_MODULE := testjni
LOCAL_CPPFLAGS :=  -std=c++11 -fexceptions -frtti -g
LOCAL_CPP_EXTENSION := .cpp
MY_CPP_LIST := ./Worker.cpp
#MY_CPP_LIST += $(wildcard $(LOCAL_PATH)/evpp/httpc/*.cc)
LOCAL_SRC_FILES := $(MY_CPP_LIST:$(LOCAL_PATH)/%=%)
#LOCAL_SHARED_LIBRARIES  += event
#LOCAL_STATIC_LIBRARIES  += event
#LOCAL_LDLIBS           := -llog -lz
#include $(BUILD_STATIC_LIBRARY)
include $(BUILD_SHARED_LIBRARY)

#=================================================================================
