#include <iostream>

int main(){
    int start;
    std::cout << "Start: ";
    std::cin >> start;

    for(start; start >=0; start--){
        std::cout << start << std::endl;
    }
    std::cout << "Blastoff!" << std::endl;
}