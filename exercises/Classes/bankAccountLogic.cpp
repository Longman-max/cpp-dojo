#include <iostream>


class bankAccount
{
public:
    int accountNumber;
    int balance;

    // create a reference to balance
    // int & balanceRef = balance;

    void deposit(int amount)
    {
        balance += amount;
        std::cout << "Money deposited sucessfully!!\n" << "Your balance is " << balance << std::endl;
    }


    void withdraw(int amount)
    {
        if (balance > amount){
            balance = balance - amount;
            std::cout << amount << "deducted.\n" << "Your balance is " << balance << std::endl;
        }else std::cout << "Insufficient funds " << std::endl;
    }
};

int main()
{
    bankAccount myKuda;
    myKuda.accountNumber = 202302121;
    myKuda.balance = 20000;

    myKuda.deposit(5000);

    bankAccount myFirstBank;
    myFirstBank.accountNumber = 3210329055;
    myFirstBank.balance = 34000;

    myFirstBank.withdraw(500000);

    return 0;
}