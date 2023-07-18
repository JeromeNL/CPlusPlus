#include <iostream>

int myNum = 2; // Should be avoided as much as possible


int main() {
    // same as Java
   std::string cars[] = {"vw", "volvo", "suzuki"};
   char grades[]  {'A', 'B', 'C'};

   for(int i = 0; i < sizeof(cars) / sizeof(std::string); i++){
       std::cout << cars[i] << '\n';
   }

    return 0;
}

