#include <iostream>
#include <string>
#include <vector>

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

int main() {
    std::vector<BankAccount> bank;

    bank.push_back(BankAccount("Obasi", 45000));
    bank.push_back(BankAccount("James", 65000));
    bank.push_back(BankAccount("Mark", 75000));
    bank.push_back(BankAccount("Benson", 45000));


    // using this doesn't update the list
    // for (BankAccount b : bank) {
    //     b.deposit(100);
    // }


    for (int i = 0; i < bank.size(); i++)
    {
        bank[i].deposit(100);
    }
   
    for (int i = 0; i < bank.size(); i++)
    {
        bank[i].withdraw(50);
    }


    for (int i = 0; i < bank.size(); i++)
    {
        std::cout << "Account holder: " << bank[i].getOwner() << " | Account number: " << bank[i].getBalance() << std::endl;
    }

    std::cout << "Total account: " << BankAccount::totalAccount << std::endl;

    return 0;
}