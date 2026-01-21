#include <iostream>
#include <string>
#include <vector>

enum class ItemType
{
    Weapon,
    Armor,
    Potion
};

struct Item
{
    std::string name;
    int value;
    ItemType type;

    Item(std::string n, int v, ItemType type) : name(n), value(v), type(type) {};

};

std::string getItemType(ItemType type)
{
    switch (type)
    {
        case ItemType::Weapon: return "Weapon";
        case ItemType::Armor: return "Armor";
        case ItemType::Potion: return "Potion";
        default: return "Unknown ";
    }
}

int main()
{
    std::vector<Item> Inventory;

    Inventory.push_back(Item("Gun", 65, ItemType::Weapon));
    Inventory.push_back(Item("Health", 54, ItemType::Potion));
    Inventory.push_back(Item("Shield", 45, ItemType::Armor));

    for (const Item& i : Inventory)
    {
        if (i.value > 50)
        {
            std::cout << "Name: " << i.name << " | " << "Worth: " << i.value << std::endl;
        }
    }

    return 0;
}