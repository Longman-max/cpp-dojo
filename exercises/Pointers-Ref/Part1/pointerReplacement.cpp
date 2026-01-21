#include <iostream>
using std::cout;
using std::endl;


int main(){
    int a =10;
    int b = 20;

    int* ptr = &a;
    cout << *ptr << endl;
    
    ptr = &b;
    cout << *ptr << endl;

    return 0;
}