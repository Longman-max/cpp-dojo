#include <iostream>

void LogMessage(const char* message){
    std::cout << message << std::endl;
}

int main(){
    
    int x = 6;

    // bool comparisonResult = x == 5;
    
    // if (comparisonResult){
    //     LogMessage("hello there");
    // }
    
    const char* ptr = "hello world";
    // const char* ptr = nullptr;

    if (ptr)
        LogMessage(ptr);
    else if (ptr == "hello")
        LogMessage("Ptr is Hello!");
    else
        LogMessage("Ptr is null");
    
    // if (x == 5){
    //     LogMessage("hello world");
    // }

    std::cin.get();
}

