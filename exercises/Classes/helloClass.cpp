#include <iostream>
#include <string>

class Person
{
public:
    void introduce(const char* name, int age){
        std::cout << "Hi " << name << " you are " << age << " years old" << std::endl;
    }
};

int main(){
    Person person;
    person.introduce("Mark", 20);
}