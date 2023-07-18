#include <iostream>

void swap(std::string &x, std::string &y);

int main() {

    std::string x = "Kool-aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << x << "\nY: " << y;

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}


