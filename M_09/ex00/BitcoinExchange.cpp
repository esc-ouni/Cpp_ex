#include "BitcoinExchange.hpp"

void exctract_kv(std::string &line, std::map<std::string, unsigned int> &Map){
    std::stringstream ss;

    // std::string token;
    // std::getline(line, token){
// 
    // }
};

void __init(int argc, char *argv[], std::map<std::string, unsigned int> &Map){
    std::string line;

    if (argc != 2){
        std::ifstream infile(argv[1]);
        if (!infile.is_open())
            throw std::runtime_error("Error: could not open file.");

        while (std::getline(infile, line)){
            exctract_kv(line, Map);
        }
    }

};

