#include <iostream>

class Device
{
public:
    Device () {std::cout << "Device Active" << std::endl;}
};

class Drone : public Device 
{
public:
    int batterLevel;

    Drone (int b)
    {
        batterLevel = b;
    }
    ~Drone () { std::cout << "Drone landing and powering off" << std::endl ;}
};

int main()
{
    Drone(85);

    return 0;
};