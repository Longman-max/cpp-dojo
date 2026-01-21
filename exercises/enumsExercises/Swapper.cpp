#include <iostream>

void swapByPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swapByReference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;    
}

int main()
{
    int a = 10;
    int b = 20;

    swapByPointer(&a, &b);
    
    swapByReference(a, b);

    std::cout << a << "\n" << b << "\n";

    return 0;

}