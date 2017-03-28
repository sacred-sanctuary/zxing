#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_google_zxing_client_android_barcodescanner_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
