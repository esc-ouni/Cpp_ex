#include "iter.hpp"

int main() {
    int         intArray[] = {1, 2, 3, 4, 5};
    char        charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    std::cout << "int array:" << std::endl;
    iter(intArray, 5, print);

    std::cout << std::endl << "char array:" << std::endl;
    iter(charArray, 5, print);

    std::cout << std::endl  << "string array:" << std::endl;
    iter(stringArray, 5, print);

    return 0;
}
