
export PATH=$PWD:$PATH
echo $PATH
#javac HelloWorldJNI.java
#java HelloWorldJNI
 

javac   HelloWorldJNI.java  
javac   Callback.java 

javac   Example.java
java -Djava.library.path=.  Example

# java  -Djava.library.path=/NATIVE_SHARED_LIB_FOLDER HelloWorldJNI