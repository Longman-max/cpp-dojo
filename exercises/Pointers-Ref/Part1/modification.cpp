#include <iostream>
using std::cout;
using std::endl;


int main(){
    int x = 50;
    int* p = &x;
    int& r = x;

    *p = 100;
    cout << r << endl;

    return 0;

}