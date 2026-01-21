#include <iostream>

void addOne(int& num)
{
    num++;
}

int main()
{
    int myVar =1;
    addOne(myVar);

    std::cout << myVar << std::endl;

}
