#include <iostream>


int main(){
    int currentYear = 2026;
    int age;
    std::cout << "What's your date of birth?: ";
    std::cin >> age;

    std::cout << "Hello, you are roughly " << 2026 - age << " years old" << std::endl;

    return 0;
}