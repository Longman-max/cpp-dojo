#include <iostream>
#include <string>

int main(){
    while (true){
        int num;
        std::cout << "Enter a number between (0-100): ";
        std::cin >> num;

        std::string result;

        if (num >= 70 && num <= 79){
            result = "C";
        }else if(num >= 80 && num <= 89){
            result = "B";
        }else if(num >= 90){
            result = "A";
        }else{
            result = "F";
        }

        std::cout << "Grade: " << result << std::endl;
    }
}