// arrays is simply a collection of data
#include <iostream>
#include <array>

// todo: and this
class Entity
{
public:
    // int *example = new int[5];
    // int example[5]; // using stack

    static const int exampleSize = 5;
    int example[exampleSize];

    std::array<int, 5> another;

    Entity()
    {
        // int a[5];
        // int count  = sizeof(a) / sizeof(int); //5

        for (int i = 0; another.size(); i++)
        {
            example[i] = 2;
        }
    }
};

int main()
{
    int example[5];
    // looping through an array
    for (int i = 0; i < 5; i++)
        example[i] = 2;

    // example[0] = 2;
    // example[4] = 4;

    // prints the number with the specified index
    // std::cout << example[0] << std::endl;

    // prints the memory allocation of the array
    // std::cout << example << std::endl;

    example[2];
    int *ptr = example;

    // todo: review this
    // pointer arithimetics
    *(int *)((char *)ptr + 8) = 6;
    *(ptr + 2) = 6;

    // creating arrays using the new keyword
    int *another = new int[5];
    for (int i = 0; i < 5; i++)
        another[i] = 2;

    // to delete
    delete[] another;

    return 0;
}