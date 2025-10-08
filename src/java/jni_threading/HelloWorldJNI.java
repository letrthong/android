//package com.baeldung.jni;

public class HelloWorldJNI {
    
    static {
        System.loadLibrary("native");
    }

    // Declare a native method sayHello() that receives no arguments and returns void
    public native void sayHello();

    
}
