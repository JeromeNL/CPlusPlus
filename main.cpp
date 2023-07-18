#include <iostream>

int main() {

    std::string name = "Bro";
    int age = 20;
    std::string freePizzas[3] {"pizza1", "pizza2", "pizza3"};



    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName;
    std::cout << *pAge;
    std::cout << freePizzas;

    return 0;
}




