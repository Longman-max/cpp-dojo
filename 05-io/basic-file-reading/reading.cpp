#include <iostream>
// for working with files
#include <fstream>
#include <string>

using std::cout;
using std::endl;
 
int main()
{
    cout << "What did you eat today?: ";
    std::string item;
    std::cin >> item;

    std::ofstream file("foods.txt");
    file << 
}