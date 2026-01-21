#include <iostream>


void printValue(const int& a)
{
    a = 9; // ERROR:must be a modifiable value 
    std::cout << a << std::endl;
}


int main(){
    int a = 20;
    printValue(a);
}