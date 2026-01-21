#include <iostream>
#include <string>
#include <vector>

class Student
{
public:
    std::string name;
    std::vector<int> marks;

    double calculateAverage()
    {
        if (marks.empty())
            return 0.0;

        int sum = 0;

        for (int mark : marks)
        {
            sum += mark;
        }

        return static_cast<double>(sum) / marks.size();
    }
};

int main()
{
    Student student1;
    student1.name = "Obasi Agbai";
    student1.marks = {85, 90, 95};

    std::cout << "Student name: " << student1.name << "\n"
              << "Average Score: " << student1.calculateAverage() << std::endl;

    return 0;
}