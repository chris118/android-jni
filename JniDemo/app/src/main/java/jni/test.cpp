#include "com_putao_jnidemo_PrivSdkClient.h"
#include "Constants.h"
#include "Worker.h"

JNIEnv *jniEnv;

JNIEXPORT jstring JNICALL Java_com_putao_jnidemo_PrivSdkClient_test(JNIEnv *env, jobject obj)
{
    Worker worker;
    std::string str =  worker.doSomething();

    return env->NewStringUTF(str.c_str());
}


JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved)
{
  LOGD("JNI startedLoad ");
  int status = vm->GetEnv((void **) &jniEnv, JNI_VERSION_1_6);
  if (status != JNI_OK) {
      status = vm->AttachCurrentThread(&jniEnv, NULL);
      if (status < 0) { return -1; }
  }
  LOGD("JNI loaded ");

  return JNI_VERSION_1_6;
}

void JNICALL JNI_OnUnload(JavaVM* vm, void* reserved){
   if (jniEnv != NULL) {
   }
}