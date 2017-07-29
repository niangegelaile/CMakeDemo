#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_ange_cmakedemo_Ndk_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = " My Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
