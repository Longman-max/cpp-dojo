#include <iostream>

int main(){
    int sum = 0;

    for (int i = 0; i < 5; i ++){
        int num;
        std::cout << "Number: ";
        std::cin >> num;

        sum += num;
    }

    std::cout << "The total is: " << sum << std::endl;

    return 0;
}