
// demonstration of how to declare a function fro another file 
    // void Log(const char* message);
    // but there is an easier way to do this

#include <iostream>
#include "Log.h"

void Log(const char* message){
    std::cout << message << std::endl;
}


void InitLog(){
    Log("hello world");
}
