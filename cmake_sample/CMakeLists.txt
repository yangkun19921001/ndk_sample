
# cmake 版本
cmake_minimum_required(VERSION 3.4.1)


add_library(ndk-cmake-lib SHARED
        src/main/cpp/hello-jni.c
        src/main/cpp/hello-jni2.cpp
        )

# Include libraries needed for hello-jni lib
target_link_libraries(ndk-cmake-lib
        android
        log)