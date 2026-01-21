#include <iostream>

int main(){
    int user;
    int total = 0;

    // get user input
    std::cout << "Give me a positive interger: ";
    std::cin >> user;

    for (int i = 0; i <= user; i++){
        total += i;
        // std::cout << total << std::endl;
    }

    std::cout << total << std::endl;
}