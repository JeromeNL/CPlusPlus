#include <iostream>


int main() {

  std::string name;

  std::cout << "Enter your name";
  std::cin >> name;

    if(name.length() > 12){
        std::cout << "What a long name!";
    }

    name.empty(); // returns true when empty
    name.append("@gmail.com");
    name.at(0);
    name.insert(0, "@");
    name.find(' ');
    name.erase(3, 4);


    return 0;
}
