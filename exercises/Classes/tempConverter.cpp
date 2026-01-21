#include <iostream>

class Temperature{
public:
    int celsius;

    double toFaherenheit(){
        int result;
        result = (celsius * 2) / 30;
        return result;
    }
};


int main(){
    Temperature Lagos;
    Lagos.celsius = 531;

    std::cout << "Temperature in fahrenheit will be " << Lagos.toFaherenheit() << "Faherenheit" << std::endl;
}