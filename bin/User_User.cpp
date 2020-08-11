#include <iostream>
#include "User_User.h"

JNIEXPORT jstring JNICALL Java_User_User_greeting (JNIEnv *env, jobject self, jstring name) {
      const char *string  = env->GetStringUTFChars(name, 0);
      std::string myString(string);
      std::string result = myString + " for c++ text" ;
      const char * c = result.c_str();
      return env->NewStringUTF(c);
}

JNIEXPORT jint JNICALL Java_User_User_countItem
  (JNIEnv *, jobject, jintArray, jint);