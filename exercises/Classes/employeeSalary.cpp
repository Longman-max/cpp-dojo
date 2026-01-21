#include <iostream>
#include <string>


class Employee{
public:
    std::string name;
    int hourlyRate;
    int hoursWorked;


    double calculatePay(){
        int pay;
        if (hoursWorked > 40) return pay = (hourlyRate * hoursWorked) * 1.5;

        pay = hourlyRate * hoursWorked;
        return pay;
    }
};


int main(){
    Employee employee1;
    employee1.name = "Mister James";
    employee1.hourlyRate = 34;
    employee1.hoursWorked = 40;

    std::cout << employee1.name << "pay will be " << employee1.calculatePay() << std::endl;
}
