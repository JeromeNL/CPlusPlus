#include <iostream>

class Student{
private:
    std::string name;
    int age;
    double gpa;
public:
    std::string getName(){
        return name;
    }

    void setName(std::string name){
        this->name = name;
    }

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    Student(std::string name){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }


};

int main() {

    Student student1("Jerome", 20, 1.3);
    Student student2("Kees");
    return 0;
}





