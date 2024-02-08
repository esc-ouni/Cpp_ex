#ifndef __PMERGEME_HPP_
#define __PMERGEME_HPP_

#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
#include <utility>

#include <sys/time.h>

class Timer{
    private:
        clock_t _start;

    public:
        Timer();
        Timer(clock_t const &start);
        Timer(Timer const &r_inst);
        Timer &operator=(Timer const &r_inst);
        ~Timer();

        clock_t GetSpentTime(clock_t const &end) const;
};

void    __init(int argc, char *argv[], std::deque<int> &deque);
clock_t run_using_vector(std::deque<int> &deque, std::vector<int> &vector);
clock_t run_using_vector_v2(std::deque<int> &Input, std::vector<int> &vector);
clock_t run_using_list(std::deque<int> &deque, std::list<int> &list);
double  spent_time(clock_t const &raw_value);

template <typename T>
void print(T Conatiner){
    for (auto &elem : Conatiner){
        std::cout << "<" << elem << ">, ";
    };
    std::cout << std::endl;
};

template <typename T>
void print_pair(T Conatiner){
    for (auto &elem : Conatiner){
        std::cout << "[" << elem.first << ", " << elem.second << "], ";
    };
    std::cout << std::endl;
};


#endif