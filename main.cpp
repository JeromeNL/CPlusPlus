#include <iostream>


int main() {

   for(int i = 0; i < 15; i++){
       if(i == 13){
           continue;
       }
       std::cout << i;
   }

    return 0;
}
