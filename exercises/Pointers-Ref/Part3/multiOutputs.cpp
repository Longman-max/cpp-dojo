/*
    Multiple Outputs (References) Standard functions can only return one value. Use references to return two.
    Write a function getStats that takes one input integer (e.g., 5).
    It should take two other parameters by reference: square and cube.
    Calculate the square and cube inside the function and store them in the reference parameters.

*/ 

#include <iostream>

void getStats(int input, int& sq, int& cb)
{
    sq = input  * input;
    cb = input  * input * input;
}

int main(){
    int val = 12, s, c;
    getStats(val, s, c);

    std::cout << "Square " << s << " Cube " << c;
}