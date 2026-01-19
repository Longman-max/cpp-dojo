#include <iostream>


void Log(const char* message)
{
    std::cout << message << std::endl;
}


int main()
{
    // forloops

    for(int i =0; i < 5; i++)
    {
        Log("hello world");
    }

    Log("===========================");

    // while loops
    int i = 0;
    while (i < 5)
    {
        Log("Hello Longman");
        i++;
    }
    
    // do while loops -- wil be executed once and for all   
    bool condidtion = false;
    do{
        // must run based in the code
    }while(condidtion);


    std::cin.get();


}
