#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;


class Student{

    std::string name;
    std::vector<int> scores;

    int addScore(int score)
    {
        scores.push_back(score);
        // return scores;
    }

    double getAverage(){
        if (scores.empty())
        {
            cout << "This Student has no score";
            return 0.0;            
        }


        int sum = 0;

        for (int score : scores){
            sum += score;
        }

        return static_cast<double>(sum) / scores.size();

    }

};