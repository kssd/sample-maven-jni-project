#include "in_sangram_jni_JniAdaptor.h"
#include <string.h>

JNIEXPORT jint JNICALL Java_in_sangram_jni_JniAdaptor_intMethod (JNIEnv *env, jobject obj, jint num) {
     return num * num;
}

JNIEXPORT jboolean JNICALL Java_in_sangram_jni_JniAdaptor_booleanMethod (JNIEnv *env, jobject obj, jboolean flag){
  return !flag;
}

JNIEXPORT jstring JNICALL Java_in_sangram_jni_JniAdaptor_stringMethod (JNIEnv *env, jobject obj, jstring text){
    const char* str = (*env)->GetStringUTFChars(env, text, 0);
    char cap[128];
    strcpy(cap, str);
    (*env)->ReleaseStringUTFChars(env, text, str);
    return (*env)->NewStringUTF(env, strdup(cap));
}

JNIEXPORT jint JNICALL Java_in_sangram_jni_JniAdaptor_intArrayMethod(JNIEnv *env, jobject obj, jintArray array){
    int i, sum = 0;
    jsize len = (*env)->GetArrayLength(env, array);
    jint *body = (*env)->GetIntArrayElements(env, array, 0);
    for (i = 0; i<len; i++){
        sum += body[i];
     }
    (*env)->ReleaseIntArrayElements(env, array, body, 0);
    return sum;
}

int main(){
    return 0;
}