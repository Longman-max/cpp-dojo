#include <iostream>

int main(){
    int max;
    std::cout << "What is the limit?: ";
    std::cin >> max;

    for (max; max >= 5; max--){
        if (max % 5 == 0){
            std::cout << max << std::endl;
        }
    }
}