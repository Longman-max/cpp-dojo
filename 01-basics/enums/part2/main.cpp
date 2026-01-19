#include <iostream>

// enums define a set of named int constants

enum class Status
{
    Pending,
    Approved,
    Rejected
};


int main()
{
    Status currentstatus = Status::Approved;

    if (currentstatus == Status::Approved)
    {
        std::cout << "Proceeding..." << std::endl;
    }
    else {
        
    }
}
