#include "PmergeMe.hpp"

time_t run_using_vector(std::deque<unsigned int> &Input, std::vector<unsigned int> &vector){
    Timer timer(clock());

    return (timer.GetSpentTime(clock()));
};

time_t run_using_list(std::deque<unsigned int> &Input, std::list<unsigned int> &list){
    Timer timer(clock());

    return (timer.GetSpentTime(clock()));
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
        deque.push_back(extract_num(token)); 
    }
};


Timer::Timer(){
};

Timer::Timer(clock_t const &start){
    this->_start = start;
};

Timer::Timer(Timer const &r_inst){
    (*this) = r_inst;
};

Timer &Timer::operator=(Timer const &r_inst){
    (void)r_inst;
    return (*this);
};

Timer::~Timer(){
};

time_t Timer::GetSpentTime(clock_t const &end) const{
    if (this->_start == -1 || end == -1)
        throw std::runtime_error("Error: Problem Calculating Time !");
    return ((end - this->_start));
};
