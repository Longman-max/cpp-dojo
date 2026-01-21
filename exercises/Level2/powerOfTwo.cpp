#include <iostream>
#include <cmath>


int main(){

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 1; i <= num; i+=1)
    {
        std::cout << "2 raise to power " << i << " is "  << std::pow(2.0, i) << std::endl;
    }
     
    
}