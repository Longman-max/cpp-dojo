#include <iostream>

/*
    Pointer Aliasing (Two Pointers, One Variable) Create an integer score = 100. Create two pointers, ptrA and ptrB, both pointing to score.
    Change the value of score using ptrA.
    Print the value using ptrB.
    (This demonstrates that different pointers can look at the same memory address).
*/


int main(){
    int score = 100;    
    int*ptrA = &score;
    int*ptrB = &score;

    *ptrA = 200;
    
    std::cout << *ptrB << std::endl;
}