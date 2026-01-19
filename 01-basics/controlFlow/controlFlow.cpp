#include <iostream>


void Log(const char* message)
{
    std::cout << message << std::endl;
}


int main()
{
    for(int i =0; i < 5; i++)
    {   
        // if (i % 2 == 0)
        if (i > 2)
            continue;
        Log("Hi Mom");
        std::cout << i << std::endl;
    }

    

    std::cin.get();


}
