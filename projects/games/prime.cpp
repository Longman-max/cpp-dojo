#include <iostream>
#include <vector>
#include <string>
#include <memory>

// enum
enum class ItemType
{
    None,
    Weapon,
    Armor,
    Potion
};

std::string getItemType(ItemType type)
{
    switch (type)
    {
    case ItemType::Weapon:
        return "Weapon";
    case ItemType::Armor:
        return "Armor";
    case ItemType::Potion:
        return "Potion";
    default:
        return "Unknown";
    }
}

// item class
class Item
{

private:
    std::string name;
    int value;
    ItemType type;

public:
    static int totalItems;

    Item(std::string n, int v, ItemType t = ItemType::None) : name(n), value(v), type(t) { totalItems++; };

    std::string getName() const { return name; }
    int getValue() const { return value; }
    ItemType getType() const { return type; }

    // update value
    void updateValue(int newValue)
    {
        value = newValue;
    }
};

int Item::totalItems = 0;

// payment system
class PaymentMethod
{
public:
    virtual void processPayment(double amount) = 0;
    virtual ~PaymentMethod() {}
};

class Crypto : public PaymentMethod
{

    void processPayment(double amount) override
    {
        std::cout << "Paid " << amount << " using Crypto\n";
    }
};

class Cash : public PaymentMethod
{
public:
    void processPayment(double amount) override
    {
        std::cout << "Paid " << amount << " using Cash \n";
    }
};

// inventory class
class Inventory
{
private:
    std::vector<std::unique_ptr<Item>> items;

public:
    void addItem(std::unique_ptr<Item> item)
    {
        items.push_back(std::move(item));
    }

    void dislplayItems() const
    {
        for (const auto &item : items)
        {
            std::cout << "Name: " << item->getName() << " | Value: " << item->getValue() << " | Type: " << getItemType(item->getType()) << std::endl;
        }
    }

    Item *findItem(const std::string &name)
    {
        for (auto &item : items)
        {
            return item.get();
        }

        return nullptr;
    }
};

// main

int main()
{

    Inventory inventory;
    double balance = 500;
    std::unique_ptr<PaymentMethod> payment = std::make_unique<Crypto>();

    while (true)
    {

        std::cout << "\n====== Inventory System ======\n";
        std::cout << "1. Add Items:\n";
        std::cout << "2. View Items:\n";
        std::cout << "3. Buy Items:\n";
        std::cout << "4. Total Items:\n";
        std::cout << "5. Switch Payment(Crypto/Cash)\n";
        std::cout << "0: Exit \n";

        int option;
        std::cin >> option;

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input\n";
            continue;
        }

        // adding items
        if (option == 1)
        {
            std::string name, typeStr;
            int value;

            std::cout << "Enter name: ";
            std::cin >> name;

            std::cout << "Enter a value: ";
            std::cin >> value;

            std::cout << "Enter type (Weapon, Armor, Potion): ";
            std::cin >> typeStr;

            // todo: review
            ItemType type = ItemType::None;

            if (typeStr == "Weapon")
                type = ItemType::Weapon;
            else if (typeStr == "Armor")
                type = ItemType::Armor;
            else if (typeStr == "Potion")
                type = ItemType::Potion;

            inventory.addItem(std::make_unique<Item>(name, value, type));
        }
        else if (option == 2)
        {
            inventory.dislplayItems();
        }
        else if (option == 3)
        {
            std::string name;
            std::cout << "Enter item name to buy: ";
            std::cin >> name;

            Item *item = inventory.findItem(name);

            if (!item)
            {
                std::cout << "Item not found\n";
                continue;
            }

            if (balance >= item->getValue())
            {
                payment->processPayment(item->getValue());
                balance -= item->getValue();
                std::cout << "Remaining balance: " << balance << std::endl;
            }
            else
            {
                std::cout << "Not enough balance\n";
            }
        }
        else if (option == 4)
        {
            std::cout << "Total items: " << Item::totalItems << std::endl;
        }
        else if (option == 5)
        {
            int choice;
            std::cout << "1. Crypto\n2. Cash\nChoose: ";
            std::cin >> choice;

            if (choice == 1)
                payment = std::make_unique<Crypto>();
            else
                payment = std::make_unique<Cash>();
        }
        else if (option == 0)
        {
            break;
        }
    }
}
