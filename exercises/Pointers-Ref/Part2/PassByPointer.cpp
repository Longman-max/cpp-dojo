#include <iostream>
using std::cout;
using std::endl;

// void Square(int a){
//     int *p = &a;
//     *p = *p * *p;

//     int result = *p;
//     cout << "The result is " << result << endl;
// }

// int main(){
//     int a = 20;
//     Square(a);
// }


// alternatively

void square(int*  ptr)
{
    if (ptr) *ptr = (*ptr) * (*ptr);
} 

int main()
{
    int myVar = 30;
    square(&myVar);
}