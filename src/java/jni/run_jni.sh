
export PATH=$PWD:$PATH
echo $PATH
#javac HelloWorldJNI.java
#java HelloWorldJNI
 

javac   HelloWorldJNI.java 
java -Djava.library.path=.  HelloWorldJNI

# java  -Djava.library.path=/NATIVE_SHARED_LIB_FOLDER HelloWorldJNI