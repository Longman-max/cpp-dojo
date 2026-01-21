#include <iostream>


int main(){

    std::cout << "Celisus to Faherheit converter" << std::endl;
    int tempCelsius;
    std::cout << "What is the temperature in celsius";
    std::cin >> tempCelsius;

    int result = (tempCelsius * (9/5) + 32);
    std::cout << "The ans is " << result << " fahrenheit." << std::endl;

    return 0;
}