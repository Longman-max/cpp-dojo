#include <iostream>
using std::cout;
using std::endl;


int main(){
    int x = 50;
    
    // pointer
    int* p = &x;

    // references
    int& r = x;

    // normal variable calling
    cout << "x is " << x << endl;

    // via pointer
    cout << "p is " << *p << endl;

    // via reference
    cout << "r is " << r << endl;
}