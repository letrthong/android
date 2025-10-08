

#include "HelloWorldJNI.h"
#include <iostream>


JNIEXPORT void JNICALL Java_HelloWorldJNI_sayHello(JNIEnv* env, jobject thisObject) 
{
  std::cout << "Java_HelloWorldJNI_sayHello  Hello from C++ !!" << std::endl;
}
