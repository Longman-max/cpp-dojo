// a Pointer is variable that stores the memory address of another variable

#include <iostream>
using std::cout;
using std::endl;

int main(){
    int number = 10;
    int* ptr = &number; // ptr holds the address of 'number'

    cout << "Address: " << ptr << endl; //this outputs the memory address of 'number'
    cout << "Value: " << *ptr << endl; // outputs 10

    *ptr = 20; // changing the vaule of a pointer
    cout << "New value: " << number << endl; // outputs 20

    return 0;
}


