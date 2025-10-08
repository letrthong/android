

#include "HelloWorldJNI.h"
#include <iostream>
#include <thread>

//https://cpp.hotexamples.com/examples/-/JNIEnv/GetMethodID/cpp-jnienv-getmethodid-method-examples.html
//  JNIEnv *env = ofGetJNIEnv();

 
void thread_function()
{ 
  std::cout << "thread_function"<<std::endl;
}



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

  //Create threading
  std::cout << "Java_HelloWorldJNI_sayHello::Create threading" << std::endl;
  std::thread threadObj(thread_function);
  threadObj.join();

}
