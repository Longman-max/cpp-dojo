#include <iostream>


int main(){
    int x = 5;
    int* p = &x;
    int* pp = &*p;

    *pp = 10;

    std::cout << x << std::endl;
    
    return 0;
}