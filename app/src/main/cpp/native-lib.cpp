#if defined(__clang__) || defined (__GNUC__)
# define ATTRIBUTE_NO_SANITIZE_ADDRESS __attribute__((no_sanitize_address))
#else
# define ATTRIBUTE_NO_SANITIZE_ADDRESS
#endif

#include <jni.h>
#include <string>

#include "log.h"
#include "guest_msg/guest_api.h"
#include "user_msg/user_msg_api.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_androidasanchecksamestruct_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {

    std::string hello = "Hello from C++";

    send_msg();
    send_guest_msg();

    LOGD("stringFromJNI....");

    return env->NewStringUTF(hello.c_str());
}