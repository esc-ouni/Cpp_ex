#include "PmergeMe.hpp"

time_t run_using_vector(std::deque<unsigned int> &deque, std::vector<unsigned int> &vector){
    return (0);
};

time_t run_using_list(std::deque<unsigned int> &deque, std::list<unsigned int> &list){
    return (0);
};

unsigned int extract_num(std::string &number){
    unsigned int n;
    if (number.empty())
        throw std::runtime_error("Error: Invalid Input !");
    for (size_t i = 0; i < number.length(); i++){
        if (!isdigit(number.c_str()[i]) || i == 11)
            throw std::runtime_error("Error: Invalid Input !");
    }
    return (((n = std::atoi(number.c_str())) <= INT_MAX) ? n : throw std::runtime_error("Error: Invalid Input !"));
};

void __init(int argc, char *argv[], std::deque<unsigned int> &deque){
    std::string token;
    if (argc < 2)
        throw std::runtime_error("Error: Wrong Arg Count !");

    for (int i = 1; i < argc; ++i){
        token = argv[i];
        deque.push_back(extract_num(token)); // 
        // std::cout << "<" << token << ">" << std::endl;
    }
};
