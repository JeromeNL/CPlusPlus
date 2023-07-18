#include <iostream>
#include <ctime>

void happyBirthday(std::string name);


int main() {

    happyBirthday("Pietje");

    return 0;
}

void happyBirthday(std::string name){
    std::cout << "HBD!" << name;
    std::cout << "HBD!";
    std::cout << "HBD!";
}