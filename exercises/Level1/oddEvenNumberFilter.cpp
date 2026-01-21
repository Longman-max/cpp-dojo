#include <iostream>

int main(){
    int X;
    std::cout << "Start: ";
    std::cin >> X;

    int end;
    std::cout << "End: ";
    std::cin >> end;

    for (X; X <= end; X++){
        if (X % 2 == 0){
            std::cout << X << " is an even number." << std::endl;
        }
        continue;
    }

}
