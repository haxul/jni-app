#include <iostream>
#include "User_User.h"
#include <linux/jni_md.h>
#include <jni.h>
#include <vector>

using namespace std;
/*
    string to jstring
    jstring to string
*/
JNIEXPORT jstring JNICALL Java_User_User_greeting (JNIEnv *env, jobject self, jstring name) {
      const char *string  = env->GetStringUTFChars(name, 0);
      std::string myString(string);
      std::string result = myString + " for c++ text" ;
      const char * c = result.c_str();
      return env->NewStringUTF(c);
}
/*
    jintArray to vector
    vector to jintArray
*/

JNIEXPORT jintArray JNICALL Java_User_User_countItem (JNIEnv * env, jobject self, jintArray intArray, jint size) {
    int vectorSize = (int) size;
    auto *intVector = new vector<int>( vectorSize );
    env->GetIntArrayRegion( intArray , 0, vectorSize, &(*intVector)[0] );
    auto mappedVector = new vector<int>;

    for (int i : *intVector) {
        mappedVector->push_back(i * 10);
    }

    jintArray output = env->NewIntArray(mappedVector->size());
    env->SetIntArrayRegion( output, 0, mappedVector->size(), &(*mappedVector)[0] );
    delete intVector;
    delete mappedVector;
    return output;
}
