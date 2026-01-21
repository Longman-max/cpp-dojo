#include <iostream>

int main(){
    int age;
    std::cout << "How old are you?: ";
    std::cin >> age;

    bool isEligible = age == 18 || age > 18;
    if (isEligible){
    std::cout << "You can vote!" << std::endl;
    }else
        std::cout << "Too young" << std::endl;


    return 0;
}