/*
    this sample combines inheritance, constructors and deconstructors
    the Base constructor runs before the Derived constructor.
*/

#include <iostream>

class Hardware
{
public:
    Hardware() { std::cout << "Powering up hardware....." << std::endl;}
    ~Hardware() { std::cout << "Shutting down hardware....." << std::endl; }
};


class Sensor : public Hardware
{
public:
    Sensor() { std::cout << "Calibrating Lidar sensors...." << std::endl;}
    ~Sensor() { std::cout << "Lidar sensors offline...." << std::endl;}
};


int main()
{
    Sensor Lidar;
    return 0;
}