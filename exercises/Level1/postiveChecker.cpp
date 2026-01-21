#include <iostream>

int main(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0){
        std::cout << num << " is a negative number" << std::endl;
    }
    else{
        std::cout << num << " is an postive number" << std::endl;
    }
}