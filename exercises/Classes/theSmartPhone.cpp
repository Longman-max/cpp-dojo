#include <iostream>
#include <string>

class Phone{
public:
    std::string brand;
    int batteryLevel;

    double call(int minutes){
        // reduce the battery level 1% per minutes
        batteryLevel = batteryLevel - (batteryLevel * (minutes * 0.01));

        return batteryLevel;
    }

    int charge(){
        batteryLevel = 100;
        return batteryLevel;
    }

};


int main(){
    Phone phone1;
    phone1.brand = "Google Pixel";
    phone1.batteryLevel = 100;

    phone1.call(20);

    std::cout << "Phone brand: " << phone1.brand << "\n" << "Battery Level: " << phone1.batteryLevel << std::endl;

    return 0;
}