#include <iostream>

int main() {

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was nog assigned";
    } else{
        std::cout << "address was assigned";
    }

    return 0;
}




