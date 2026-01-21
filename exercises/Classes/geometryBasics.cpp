#include <iostream>

class Rectangle
{
public:
    
    void area(int w, int h)
    {
        int result;
        result = w * h;

        std::cout << "The area is " << result << std::endl;
    }
    
    void perimeter(int w, int h)
    {
        int result;
        result = 2 * (w + h);
        std::cout << "The perimeter is " << result << std::endl;
    }

};

int main()
{
    Rectangle rec1;
    rec1.area(2, 3);


    Rectangle rec2;
    rec2.perimeter(2, 3);

    return 0;
}