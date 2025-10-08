//package com.baeldung.jni;

public class HelloWorldJNI {

    static {
        System.loadLibrary("native");
    }
    
    // Declare a native method sayHello() that receives no arguments and returns void
    private native void sayHello();

    public static void main(String[] args) {
        new HelloWorldJNI().sayHello();
    }
}
