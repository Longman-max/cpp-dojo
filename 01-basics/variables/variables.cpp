#include <iostream>


// Intergers
// int stands for integer and let's us store our data in a given range 
// first we type the type of variable (int, char)
 // an interger is 4 bits (2 bytes) large : -2b -> 2b

 int main() { 

    // unsigned -- allows the variable to store only non-negative numbers (zero and positive values)
    unsigned int variable = 8;
    std::cout << variable << std::endl;
    
    // intergers
    // int variable = 20;
    // std::cout << variable << std::endl;

    // using short type
    short num = 'A';
    std::cout << num << std::endl;

    // using float
    float myvar = 5.6;
    std::cout << myvar << std::endl;

    double var = 5.2;      

    // booleans
    bool smartLLM = true;
    std::cout << sizeof(bool) << std::endl;

    std::cin.get();
}

// how to know how big a dtype is using sizeof bla bla bla..


// other types
// Char, short, long, float


// float -- >  4 bits large
// double --> 8 bits large


// bool - true is 1 and false is 0