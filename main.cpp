#include <iostream>

class Human{
public:
    std::string name;
    std::string occupation;
    int age;

    void eat(){
        std::cout << "This person is eating";
    }

    void drink(){
        std::cout << "This person is drinking";
    }

};

int main() {

    Human human1;


    return 0;
}





