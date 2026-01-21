#include <iostream>
#include <vector>
#include <string>


class Student
{
public:
    std::string name;
    std::vector<int> marks;


    double calculateAverage() {
        if (marks.empty()) return 0.0;


        int sum = 0;


        for (int mark : marks){
            sum += mark;
        }

        return static_cast<double>(sum) / marks.size();
    }
};


int main() {
    Student student1;
    student1.name = "Obasi";
    student1.marks = {85, 90, 78}; // assigning vector directly

    std::cout << "Student: " << student1.name << "\n";
    std::cout << "Average: " << student1.calculateAverage() << std::endl;

    return 0;
}