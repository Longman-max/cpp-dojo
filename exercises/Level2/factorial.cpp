#include <iostream>

int main(){

    int factorial  = 1;

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num< 0){
        std::cout << "Invalid number \n";

    }
    else{
        for (int i = num; i > 1; i--){
        factorial*=i;
        }
        std::cout << "the factorial is " << factorial << std::endl;
    }
    return 0;
}
