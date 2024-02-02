#include "easyfind.hpp"

int main(){
    std::cout << "EASY FIND !" << std::endl;

    // int n;
    std::vector<int> Container(4);

    Container[0] = 1;
    Container[1] = 2;
    Container[2] = 3;
    Container[3] = 4;

    std::vector<int>::iterator it = std::find(Container.begin(), Container.end(), 7);

    std::cout << *it << std::endl;
    
    // n = -1; std::cout << "EFind found " << n << "\t: " << std::boolalpha << easyfind(Container, n) << std::endl;
    // n =  1; std::cout << "EFind found " << n << "\t: " << std::boolalpha << easyfind(Container, n) << std::endl;
    // n =  7; std::cout << "EFind found " << n << "\t: " << std::boolalpha << easyfind(Container, n) << std::endl;
    // n =  3; std::cout << "EFind found " << n << "\t: " << std::boolalpha << easyfind(Container, n) << std::endl;
    // n = 13; std::cout << "EFind found " << n << "\t: " << std::boolalpha << easyfind(Container, n) << std::endl;
    // n =  4; std::cout << "EFind found " << n << "\t: " << std::boolalpha << easyfind(Container, n) << std::endl;

    return 0;
};
