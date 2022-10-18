#include <jni.h>
#include <string>
#include <iostream>
#include "hello.h"

JNIEXPORT void JNICALL
Java_HelloWorld_print(JNIEnv *, jobject)
{
     std::string hello = "Hello World!\n";
     std::cout << hello;
}
