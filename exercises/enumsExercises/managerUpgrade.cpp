#include <iostream>
#include <string>
#include <vector>

// this is a simple upgrade of the manager

class BankAccount {
  private:
    std::string owner;
    double balance;

  public:
    static int totalAccount;

    BankAccount(std::string o, double b) {
        owner = o;
        balance = b;
        totalAccount++;
    }

    
    double deposit(int amount) {
        balance += amount;
        return balance;
    }
    
    double withdraw(int amount) {
        balance -= amount;
        return balance;
    }

    std::string getOwner() {return owner; }

    double getBalance() {return balance; }
};

int BankAccount::totalAccount = 0;

int main()
{
    std::vector<BankAccount> bank;
    std::string owner;
    double balance;

    int i = 0;

    while (i < 5)
    {

        std::cout << "Enter name: ";
        std::cin >> owner;

        std::cout << "Enter Balance: ";
        std::cin >> balance;

        bank.push_back(BankAccount(owner, balance));

        i++;
    }

    for (int i  = 0; i < bank.size(); i++)
    {
        std::cout << "Name: " << bank[i].getOwner() << "\n" << "Balance: " << bank[i].getBalance() << std::endl; 
    }
}