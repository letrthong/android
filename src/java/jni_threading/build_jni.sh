# 
# (Ubuntu) 64-bit JDK 
#

export JAVA_HOME=/usr/lib/jvm/java-1.11.0-openjdk-amd64/
echo $JAVA_HOME

g++ -c -fPIC  -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux"   HelloWorldJNI.cpp -o HelloWorldJNI.o

echo "create libnative.so"
g++ -shared -fPIC -o libnative.so HelloWorldJNI.o -lc
