#include <iostream>
#include <string>
#include <vector>


class Student{
public:
    std::string name;
    std::vector<int> scores;

    void addScore(int score){
        scores.push_back(score);
    }

    double getAverage(){
        if (scores.empty()) return 0.0;

        int sum = 0;
        for (int score : scores){
            sum += score;
        }

        return static_cast<double>(sum) / scores.size();
    }

    void display(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Scores: ";
        for (int score : scores){
            std::cout << score << " ";
        }
        std::cout << std::endl;
        std::cout << "Average: " << getAverage() << std::endl << std::endl;
    }
};

int main(){
    std::vector<Student> students;

    for (int i = 0; i < 3; i++){
        Student student;
        
        std::cout << "Enter Student name: ";
        std::cin >> student.name;

        std::cout << "Enter 3 test scores: ";
        for (int j = 0; j < 3; j++){
            int score;
            std::cin >> score;
            student.addScore(score);
        }

        students.push_back(student);
        std::cout << std::endl;
    }

    std::cout << "\n--- Student Information ---\n" << std::endl;
    for (Student person : students){
        person.display();
    }

    return 0;
}