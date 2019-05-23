LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := ndk_sample

LOCAL_SRC_FILES := ndk_sample.c

include $(BUILD_SHARED_LIBRARY)