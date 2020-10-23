#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    string input = argv[0];

    std::cout << "Hello, World!" << std::endl;
    std::cout << "input = " << input << std::endl;

    asm("int3");

    int array[2] = {1,2};
    array[2] = 3;
    std::cout << array[2] << std::endl;

    return 0;
}
