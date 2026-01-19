/*
    A **Constructor** is a special member function that is 
    automatically called when an object of a class is created. Its 
    main job is to initialize the object's attributes.
*/

#include <iostream>
#include <string>

class Robot {
public:
    std::string name;
    int version;

    // Parameterized Constructor
    Robot(std::string n, int v) {
        name = n;
        version = v;
        std::cout << "Robot " << name << " initialized." << std::endl;
    }
};

int main() {
    // Constructor is called here
    Robot myBot("Alpha-1", 2);
    return 0;
}