#include <iostream>


void getMax(int& rA, int& rB)
{
    if (rA > rB)
    {
        rA = 100;
    } else {
        rB = 100;
    }   
}

int main(){
    int a = 30;
    int b = 10;

    getMax(a, b);
    std::cout << a << std::endl;

}


/*
yo check out this shorter version longman

int& getMax(int& a, int& b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    getMax(x, y) = 50; // Changes y to 50 because y was larger
}

*/ 