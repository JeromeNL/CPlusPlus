#include <iostream>


double square(double length);

double cube(double length);


int main() {

  std::cout << square(4);

    std::cout << cube(4);

    return 0;
}


double square (double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}