LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := tinfish.cpp
LOCAL_SHARED_LIBRARIES := liblog libc 
LOCAL_CFLAGS := -Wall

LOCAL_MODULE := tinfishd

include $(BUILD_EXECUTABLE)
