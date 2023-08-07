# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.22.1)

project("asandemo")

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES "")

add_subdirectory(user_msg)
add_subdirectory(guest_msg)

set(SOURCE_FILES ${SOURCE_FILES} ${SOURCE})

find_library(
        log-lib
        log)

add_library(
        asandemo
        SHARED
        native-lib.cpp ${SOURCE_FILES})

# 开启 Android Asan 检测
target_compile_options(asandemo PUBLIC -fsanitize=address -fno-omit-frame-pointer)
set_target_properties(asandemo PROPERTIES LINK_FLAGS -fsanitize=address)

target_link_libraries(
        asandemo
        ${log-lib})