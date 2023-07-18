#include <iostream>



int main() {

    std::string students[] = {"spongebob", "patrick", "mr. krabs"};

    for(std::string student : students){
        std::cout << student << '\n';
    }

    return 0;
}

