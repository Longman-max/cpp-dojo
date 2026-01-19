#include <iostream>
using std::cout;
using std::endl;

int main(){
    int number = 100;
    int& ref = number; //ref is now an alias for number

    ref = 200;  //modifing th ref changes the number directly
    cout << "Number: " << number << endl;

    return 0;
}