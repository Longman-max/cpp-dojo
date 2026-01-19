#include <iostream>
#include <string>
#include <vector>

class Student
{
private:
    std::string name;
    double gpa;

public:
    Student(std::string n, double g) : name(n), gpa(g) {}; // initialiser list syntax

    std::string getName() { return name; }
    double getGPA() { return gpa; } 
};

int main()
{
    // create a vector to store student objects
    std::vector<Student> classroom;


    
    // add students to the vector
    classroom.push_back(Student("Obasi", 3.9));
    classroom.push_back(Student("James", 3.2));
    classroom.push_back(Student("Mark", 2.9));
    
    
    std::cout << "--- Class Roster --- \n";
    
    // use a loop interate through the objects
    for (int i = 0; i < classroom.size(); i++)
    {
        std::cout << i + 1 << ". " << classroom[i].getName() << " (GPA: " << classroom[i].getGPA() << ")\n";
    }
    
    // example of logic inside a loop: Find guys with mental geniusness

    std::cout << "\n --- Honor Roll --- \n";

    for (Student s : classroom)
    {
        if (s.getGPA() >= 3.5)
        {
            std::cout << s.getName() << " is on the Honor Roll.\n";
        }
    }
    
    
    return 0;
};