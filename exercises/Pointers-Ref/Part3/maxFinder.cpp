#include <iostream>

/*
The Max Finder (Returning a Pointer) Write a function getLarger that takes two integer pointers.
Compare the values they point to.
Return the pointer that points to the larger value (return type should be int*).
In main, use the returned pointer to print the winning value.
*/
void findMax(int* ptrA, int* ptrB)
{
    
    if (*ptrA > *ptrB)
    {
        std::cout << *ptrA << " is larger " << "than " << *ptrB << std::endl;
    }else
    {
        std::cout << *ptrB<< " is larger " << "than " << *ptrA << std::endl;
    }
}

int main(){

    int a = 20;
    int b = 30;

    findMax(&a, &b);


}