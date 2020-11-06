#include <iostream>
#include <string>

int main(int argc, char** argv) {

    std::string input = argv[0];

    std::cout << "Hello, World!" << std::endl;
    std::cout << "input = " << input << std::endl;

    int array[] = {1,2,3};

    for (auto& e : array) {
      std::cout << e << std::endl;
    }

    return 0;
}
