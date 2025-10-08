
export PATH=$PWD:$PATH
echo $PATH
#javac HelloWorldJNI.java
#java HelloWorldJNI
 

javac   HelloWorldJNI.java  
javac  -cp ".:./junit4-4.8.2.jar" TestLogic.java

echo "Run junit"
java -Djava.library.path=.  -cp ".:./junit4-4.8.2.jar:./hamcrest-core-1.3.jar" org.junit.runner.JUnitCore   TestLogic







