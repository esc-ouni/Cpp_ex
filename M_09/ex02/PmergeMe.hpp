#ifndef __PMERGEME_HPP_
#define __PMERGEME_HPP_

#include <iostream>
#include <vector>
#include <list>
#include <fstream>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>

void   __init(int argc, char *argv[], std::set<unsigned int> &set);
time_t run_using_vector(std::set<unsigned int> &set, std::vector<unsigned int> &vector);
time_t run_using_list(std::set<unsigned int> &set, std::list<unsigned int> &list);

template <typename T>
void print(T Conatiner){
    for (auto &elem : Conatiner){
        std::cout << "<" << elem << ">, ";
    };
    std::cout << std::endl;
};

#endif