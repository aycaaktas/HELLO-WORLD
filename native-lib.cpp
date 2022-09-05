
#include <jni.h>
#include <string>



extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(JNIEnv* env, jobject )
 {
    std::string hello = "Hello Kayhan Bey";
    return env->NewStringUTF(hello.c_str());
 }
