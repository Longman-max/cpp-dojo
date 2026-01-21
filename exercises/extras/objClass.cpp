#include <iostream>
#include <vector>
#include <string>

class Student
{
private:
    std::string name;
    double gpa;

public:
    Student(std::string n, double g) : name(n), gpa(g) {};

    std::string getName() { return name;}
    double getGPA() { return gpa; }      
};

int main()
{
    std::vector<Student> classroom;

    classroom.push_back(Student("James", 3.4));
    classroom.push_back(Student("Miles", 2.4));
    classroom.push_back(Student("Andrew", 4.4));
    classroom.push_back(Student("Mark", 4.0));
    classroom.push_back(Student("Tyler", 3.7));


    for (int i = 0; i < classroom.size(); i++)
    {
        std::cout << "Serial no: " << i + 1 << "Name: " << classroom[i].getName()
    }
}
