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

void   __init(int argc, char *argv[], std::deque<unsigned int> &deque);
time_t run_using_vector(std::deque<unsigned int> &deque, std::vector<unsigned int> &vector);
time_t run_using_list(std::deque<unsigned int> &deque, std::list<unsigned int> &list);

template <typename T>
void print(T Conatiner){
    for (auto &elem : Conatiner){
        std::cout << "<" << elem << ">, ";
    };
    std::cout << std::endl;
};

#endif