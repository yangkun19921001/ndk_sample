#include "com_yk_ndk_sample_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_yk_ndk_1sample_MainActivity_getVersion
    (JNIEnv *env, jclass type){
    return (*env)->NewStringUTF(env,"1.0.1");
    }