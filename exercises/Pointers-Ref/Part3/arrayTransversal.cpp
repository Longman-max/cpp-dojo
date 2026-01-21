#include <iostream>

int main(){
    int arr[] = {10, 20, 30};

    int* ptr = arr;

    for (int i = 0; i < 3; i++)
    {
        std::cout << *ptr << std::endl;
        ptr++;
    }

}