
// https://developer.ibm.com/articles/j-jni/
// https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html

public class Callback {

    public void callNative(){
        System.out.println("Callback::allNative\n");
        new HelloWorldJNI().sayHello();
    }


   
   // To be called back by the native code
    private void myCallback() {
        System.out.println("Callback::myCallback is from Java\n");
    }
 

}