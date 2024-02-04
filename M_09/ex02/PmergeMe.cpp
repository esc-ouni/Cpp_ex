#include "PmergeMe.hpp"

time_t run_using_vector(std::set<unsigned int> &set, std::vector<unsigned int> &vector){
    return (0);
};

time_t run_using_list(std::set<unsigned int> &set, std::list<unsigned int> &list){
    return (0);
};

void __init(int argc, char *argv[], std::set<unsigned int> &set){
    std::string       token;

    if (argc < 2)
        throw std::runtime_error("Error: Wrong Arg Count !");

    std::stringstream stream(argv[1]);
    for (; std::getline(stream, token, ' ') ;){
        // set.insert(std::atoi(token.c_str()));
        std::cout << "<" << token << ">" << std::endl;
    }
};
