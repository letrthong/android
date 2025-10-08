//import  HelloWorldJNI;
 

public class Example  {
    
    public static void main(String[] args) {
        System.out.println("Loading Library...");
        Callback a= new  Callback();

        a.callNative();
    }
}