#include "iter.hpp"

template <typename T>
void printElement(T &element) {
    std::cout << element << std::endl;
}

int main() {
    int         intArray[] = {1, 2, 3, 4, 5};
    char        charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    std::cout << "Testing int array:" << std::endl;
    iter(intArray, 5, printElement);

    std::cout << "Testing char array:" << std::endl;
    iter(charArray, 5, printElement);

    std::cout << "Testing string array:" << std::endl;
    iter(stringArray, 5, printElement);

    return 0;
}
