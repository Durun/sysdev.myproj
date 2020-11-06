#include <iostream>
#include <string>

int main(int argc, char** argv) {

    std::string input = argv[0];

    std::cout << "Hello, World!" << std::endl;
    std::cout << "input = " << input << std::endl;

    int array[2] = {1,2};
    array[1] = 3;

    return 0;
}
