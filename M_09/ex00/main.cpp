#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]){

    std::map<std::string, double> Map;

    try{
        __init(argc, argv, Map); }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl; }

    return 0;
}
