#include <iostream>
#define LOG(x) std::cout << x << std::endl

// import cout and endl tools
using std::cout;
using std::endl;

// swapping variables with cpp
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main(){

    int a = 9;
    int b = 20;
    cout << "a is " << a << " b is " << b << endl;
    
    swap(a , b);
    cout << "a is " << a << " b is " << b << endl;

    return 0;
}