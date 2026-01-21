#include <iostream>


int main(){
while (true){
        int num;
        std::cout << "Enter a value: ";
        std::cin >> num;

        if (num % 3 == 0 && num % 5 == 0){
            std::cout << "FizzBuzz" << std::endl;
        }else if(num % 3 == 0){
            std::cout << "Fizz" << std::endl;
        }else if(num % 5 == 0){
            std::cout << "Buzz" << std::endl;
        }
        else {
            std::cout << num << std::endl;
            break;
        }
    }
}