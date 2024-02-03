#include "easyfind.hpp"

int main(){
    int n;
    std::vector<int> Container(4);
    // std::list<int> Container(4);

    Container.push_back(1);
    Container.push_back(2);
    Container.push_back(3);
    Container.push_back(4);
    
    try{
        n = -1; std::cout << "Easy Find with " << n << "\t: " << easyfind(Container, n);
        std::cout << " Found !" << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try{
        n =  1; std::cout << "Easy Find with " << n << "\t: " << easyfind(Container, n);
        std::cout << " Found !" << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try{
        n = 17; std::cout << "Easy Find with " << n << "\t: " << easyfind(Container, n);
        std::cout << " Found !" << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try{
        n = 3; std::cout << "Easy Find with " << n << "\t: " << easyfind(Container, n);
        std::cout << " Found !" << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
};
