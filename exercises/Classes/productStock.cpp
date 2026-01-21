#include <iostream>
#include <string>


class Product{
public:
  std::string name;
  int price;
  int quantity;
  
  
  int sell(int amount)
  {
    quantity -=  amount;
    return quantity;
  }
  
  int restock(int amount)
  {
    quantity +=  amount;
    return quantity;
  }

};


int main(){
    Product gadget1;
    gadget1.name = "Nvidia GPU";
    gadget1.price = 2000;
    gadget1.quantity = 3000;

    gadget1.sell(2500);
    gadget1.restock(5500);

    std::cout << "Gadget name: " << gadget1.name << "\n" << "Gadget price: " << gadget1.price << "\n" << gadget1.quantity << " pieces left" << std::endl;
}