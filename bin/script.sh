#!/usr/bin/bash

g++ -I"/usr/lib/jvm/java-11-openjdk-amd64/include" -I"/usr/lib/jvm/java-11-openjdk-amd64/include/linux" -fPIC User_User.cpp -shared -o user.so -Wl,-soname -Wl,--no-whole-archive
