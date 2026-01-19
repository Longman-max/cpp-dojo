#include <iostream>
#include <vector>

class PaymentMethod {
public:
    // Virtual destructor is crucial when using virtual functions!
    virtual ~PaymentMethod() {}

    virtual void processPayment(double amount) {
        std::cout << "Processing a generic payment of $" << amount << "\n";
    }
};

class CreditCard : public PaymentMethod {
public:
    void processPayment(double amount) override {
        std::cout << "Processing Credit Card payment of $" << amount << " (Applying 2% fee).\n";
    }
};

class Crypto : public PaymentMethod {
public:
    void processPayment(double amount) override {
        std::cout << "Processing Bitcoin payment of $" << amount << " (Securing on Blockchain).\n";
    }
};

int main() {
    // Polymorphism in action: Base class pointer to Derived objects
    std::vector<PaymentMethod*> payments;
    payments.push_back(new CreditCard());
    payments.push_back(new Crypto());

    for (auto p : payments) {
        p->processPayment(100.0); // Calls the DERIVED version, not the Base version
    }

    // Cleanup
    for (auto p : payments) delete p;
    
    return 0;
}