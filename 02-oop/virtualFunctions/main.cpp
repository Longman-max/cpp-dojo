#include <iostream>

class Entity
{
public:
   virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string &name)
        : m_Name(name) {}

    // override is used to overide the function in a child class
    std::string GetName() override { return m_Name; }
};

int main()
{

    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("Obasi");
    std::cout << p->GetName() << std::endl;


    return 0;

}