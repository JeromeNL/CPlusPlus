#include <iostream>


int main() {

    int age;

    switch(age){ // same as C#
        case 1:
            std::cout << "You are a baby";
            break;
        case 2:
            std::cout << "You are a child";
            break;
        default:
            std::cout << "Default!";
    }

    return 0;
}
