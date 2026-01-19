/*
    **Inheritance** allows a class (Derived Class) to inherit 
    attributes and methods from another class (Base Class). This 
    promotes **code reusability**.
*/

#include <iostream>

// Base Class
class Vehicle {
public:
    std::string brand = "Tesla";
    void honk() {
        std::cout << "Beep beep!" << std::endl;
    }
};

// Derived Class (Inherits from Vehicle)
class Car : public Vehicle {
public:
    std::string model = "Model S";
};

int main() {
    Car myCar;
    myCar.honk(); // Accessing base class method
    std::cout << myCar.brand << " " << myCar.model << std::endl;
    return 0;
}
