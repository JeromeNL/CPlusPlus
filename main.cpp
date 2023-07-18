#include <iostream>

int myNum = 2; // Should be avoided as much as possible


int main() {
    int myNum = 1;
    std::cout << ::myNum;

    return 0;
}

