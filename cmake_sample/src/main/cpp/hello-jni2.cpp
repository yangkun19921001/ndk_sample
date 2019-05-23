
#include "com_yk_cmake_sample_MainActivity.h"


JNIEXPORT jstring JNICALL Java_com_yk_cmake_1sample_MainActivity_getCAddAdd
        (JNIEnv *env, jclass obj){
    //C 的写法
//    return (*env)->NewStringUTF(env,"1.0.1");
    //C++ 的写法
    return env->NewStringUTF("我是 C++");
}