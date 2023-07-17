#include <iostream>


int main() {

    int students = 6 - 5 + 4 * 3 / 2;
    students++;
    students--;

    students*=2;
    int remainder = students % 3;

    std::cout << remainder;
    return 0;
}
