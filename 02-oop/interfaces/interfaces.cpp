/*
    An interface is represented by an abstract class, which
    is a type that completely insulates a user from implementation
    details by decoupling the interface from the representation
*/

#include <iostream>

class Printable
{
public:
    virtual std::string getClassName() = 0;
};

class Entity : public Printable
{
public:
    virtual std::string GetName() { return "Entity"; }
    std::string getClassName() override { return "Entity"; };
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string &name)
        : m_Name(name) {}

    std::string GetName() override { return m_Name; }
    std::string getClassName() override { return "Player"; };
};

void PrintName(Entity *entity)
{
    std::cout << entity->GetName() << std::endl;
}

void Print(Printable *obj)
{
    std::cout << obj->getClassName() << std::endl;
}

int main()
{

    Entity *e = new Entity();

    Player *p = new Player("Obasi");

    Print(e);
    Print(p);

    return 0;
}