
#include "com_yk_cmake_sample_MainActivity.h"



JNIEXPORT jstring JNICALL Java_com_yk_cmake_1sample_MainActivity_getC
        (JNIEnv *env, jclass obj){
    return (*env)->NewStringUTF(env,"我是 C");
}

