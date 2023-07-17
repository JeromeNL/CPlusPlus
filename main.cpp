#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {

    text_t firstName = "Jerome";
    text_t lastName = "De Vries";
    number_t age = 20;

    std::cout << firstName << " " << lastName << " has this age: " << age;

    return 0;
}
