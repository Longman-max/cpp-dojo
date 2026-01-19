#include <iostream>
#include <string>

struct Point
{
    int x, y;

    private:
        int a;
};


int main(int argc, char const *argv[])
{

    Point p;
    p.x  = 10;
    p.y = 20;


    std::cout << p.x << p.y << std::endl;

    /* code */
    return 0;
}
