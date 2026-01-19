#include <iostream>

// void is used for a function that doesn't return anything

// void Multiply(){
//     std::cout << 5 * 8 << std::endl;

// }

int Multiply(int a, int b){
    return a * b;
}

void MultiplyandLog(int a, int b){
    int result = Multiply(a, b);
    std::cout << result << std::endl;

}

int main(){
    MultiplyandLog(3, 2);
    MultiplyandLog(1, 22);
    MultiplyandLog(31, 3);

    std::cin.get();
}