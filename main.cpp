#include <iostream>


int main() {

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Golf", "Polo", "Up"}};

    std::cout << cars[1][2];

    return 0;
}




