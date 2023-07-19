#include <iostream>

class Student{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main() {

    Student student1("Jerome", 20, 1.3);

    return 0;
}





