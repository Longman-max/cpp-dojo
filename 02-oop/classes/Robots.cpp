#include <iostream>
#include <string>

class Robot 
{
private:
    std::string name;
    int powerLevel;

public:
    // Constructor
    Robot(std::string n, int p)
    {
        name = n;
        powerLevel = p;
    }

    // method to display status
    void displayStatus(){
        std::cout << "Robot: " << name << " | Power: " << powerLevel << std::endl;
    }

    // method to recharge
    void recharge()
    {
        powerLevel = 100;
    }
};

int main()
{
    // creating an object (instanttiation)
    Robot bot1("Alpha", 45);
    bot1.displayStatus();
    return 0;
}
