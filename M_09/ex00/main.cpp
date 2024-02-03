#include "BitcoinExchange.hpp"

void print(std::map<std::string, double> &Map){
    for (auto elem : Map){
        std::cout << "<"<< elem.first << ">\t= <" << elem.second << ">" << std::endl;
    }
}

int main(int argc, char *argv[]){

    std::map<std::string, double> Map;

    try{
        __init(argc, argv, Map); }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl; }

    print(Map);

    return 0;
}
