#include <iostream>
#include <string>
#include <vector>

class Student{
private:
    std::string name;
    double gpa;

public:
    Student(std::string n, double g) : name(n), gpa(g) {};

    std::string getName() { return name; }
    double getGPA() { return gpa ;}
};

int main()
{
    std::vector<Student> classroom;

    classroom.push_back(Student("Obasi", 4.5));
    classroom.push_back(Student("James", 3.5));
    classroom.push_back(Student("Andrew", 3.5));


    // get all the elements in the object
    for (int i = 0; i < classroom.size(); i++)
    {
        std::cout << "Name: " << classroom[i].getName() << " GPA: " << classroom[i].getGPA() << std::endl;
    }

    // to find the guy with the highest mental geniusness

    for (Student s : classroom)
    {
        if (s.getGPA() > 4.0)
        {
            std::cout << s.getName() << " is a genius" << std::endl;
        }
    }


};