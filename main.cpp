#include <iostream>


int main() {

    int temp;

    std::cout << "Enter the temp";
    std::cin >> temp;

    if(temp > 18 && temp < 28){
        std::cout << "Nice weather!";
    }

    return 0;
}
