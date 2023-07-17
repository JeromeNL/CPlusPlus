#include <iostream>


int main() {

    std::string name;
    int age;

    std::cout << "what is your full name?";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << '\n';
    std::cout << "And what is your age?" << '\n';
    std::cin >> age;

    std::cout << "Thanks! You are " << age;
    return 0;
}
