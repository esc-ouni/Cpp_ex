#include "BitcoinExchange.hpp"

void exctract_kv(std::string &line, std::map<std::string, double> &Map, char dilimeter){
    std::stringstream stream(line);

    std::string token, token2;
    std::getline(stream, token, dilimeter);
    std::getline(stream, token2, dilimeter);
    try{
        Map[token] = std::stod(token2); }
    catch(const std::exception& e){
        Map[token] = 0; }
};

void __init(int argc, char *argv[], std::map<std::string, double> &Map){
    std::string line;

    if (argc != 2)
        throw std::runtime_error("Error: wrong arg count.");

    std::ifstream infile(argv[1]);
    if (!infile.is_open())
        throw std::runtime_error("Error: could not open file.");

    while (std::getline(infile, line)){
        exctract_kv(line, Map, ',');
    }
};

