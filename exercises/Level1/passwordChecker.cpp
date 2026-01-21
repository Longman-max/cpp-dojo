#include <iostream>

int main(){

    int secretNumber = 1234;

    while (true){
        int user;
        std::cout << "Enter your secret number: ";
        std::cin >> user;
        if (user == secretNumber){
            std::cout << "Access Granted" << std::endl;
            break;
        }
        else {
            std::cout << "Sorry try again" << std::endl;
        }

    }
    
}