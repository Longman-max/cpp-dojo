// static means persitent -- it changes the lifespan and visiblity of variables

#include <iostream>

void counter()
{
    static int count = 0;
    count++;

    std::cout << count << std::endl;
}

int main(int argc, char const *argv[])
{

    counter();
    counter();
    counter();
    return 0;
}

