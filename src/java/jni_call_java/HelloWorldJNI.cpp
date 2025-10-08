

#include "HelloWorldJNI.h"
#include <iostream>


JNIEXPORT void JNICALL Java_HelloWorldJNI_sayHello(JNIEnv* env, jobject thisObject) 
{
  std::cout << "Java_HelloWorldJNI_sayHello::Hello from C++ !!" << std::endl;

  // Get a class reference for  Callback
  jclass cls = env->FindClass( "Callback");
  if(cls){
    // ()V -> which takes no arg and return void
    jmethodID midCallBack   = env->GetMethodID( cls, "myCallback", "()V");
    if (NULL == midCallBack  ){
       std::cout << "Java_HelloWorldJNI_sayHello::midCallBack  =NULL" << std::endl;
    }else{
       //std::cout << "Java_HelloWorldJNI_sayHello::In C, call back Java's callback()" << std::endl;
        env->CallVoidMethod( thisObject,  midCallBack);
    }
  }else{

    std::cout << "Java_HelloWorldJNI_sayHello::cls =NULL" << std::endl;
  }
}
