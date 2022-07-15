#include <jni.h>
extern "C"
JNIIMPORT jint JNICALL
Java_com_aweirdtrashcan_ndktutorial_Math_add(
    JNIEnv* pEnv,
    jobject pThis,
    jint a,
    jint b
    ) {
        return a + b;
}

extern "C"
JNIEXPORT jfloat JNICALL
Java_com_aweirdtrashcan_ndktutorial_Math_someCrazyMath(JNIEnv *env, jobject thiz, jint a, jint b) {
    return static_cast<jfloat>(a * a * a * (b / a * 88));
}