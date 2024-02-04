#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]){
    try{
        __init(argc, argv); }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl; }
    return 0;
}
