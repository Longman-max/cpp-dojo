#include <iostream>

class Circle{
public:
    int r;

    double getCircumference(){
        return 2 * 3.142 * r;
    }

    double area(){
        return 2 * 3.142 * r * r;
    }
};


int main(){
    Circle circle1;
    circle1.r = 10;

    std::cout << "Radius: " << circle1.r << "\n" << "Circumference: " << circle1.getCircumference() << "\n" << "Area: " << circle1.area() << std::endl;


    return 0;
}