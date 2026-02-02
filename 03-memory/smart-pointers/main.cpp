#include <iostream>
#include <memory>
#include <string>

class Entity
{
public:
  Entity()
  {
    std::cout << "Entity created\n";
  }

  // destructor
  ~Entity()
  {
    std::cout << "Entity deleted\n";
  }
};

int main()
{ 
  // shared pointers
  {
    std::shared_ptr<Entity> e0;
    {
      std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
      e0 = sharedEntity;
    }
  }


  // unique ptr
  std::unique_ptr<Entity>;


}