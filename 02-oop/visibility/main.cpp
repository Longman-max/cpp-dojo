/*
    visibilty refers to the ability of one part of a program 
    (like a class or a function) to access another 
    part, such as a variable, function, or class member. This makes code easier to explain and read.
*/

#include <iostream>

class Base {
public:
    int publicVar;    // Visible everywhere

    Base() : publicVar(1), protectedVar(2), privateVar(3) {}

protected:
    int protectedVar; // Visible only within Base and derived classes

private:
    int privateVar;   // Visible ONLY within Base
};

class Derived : public Base {
public:
    void accessTest() {
        publicVar = 10;    // OK: Inherited as public
        protectedVar = 20; // OK: Visible to derived class
        
        // privateVar = 30; // ERROR: Cannot access base class private members
    }
};

int main() {
    Base obj;
    
    obj.publicVar = 100;    // OK: Visible to the outside world
    
    // obj.protectedVar = 200; // ERROR: Not visible outside the class hierarchy
    // obj.privateVar = 300;   // ERROR: Not visible outside the class
    
    return 0;
}