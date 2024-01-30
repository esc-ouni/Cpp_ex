#ifndef __EASYFIND_HPP_
#define __EASYFIND_HPP_

#include <iostream>
#include <vector>

// template <typename T>
// T &easyfind(T &, int &);

template <typename T>
bool easyfind(T &Container , int param){
    for (size_t i = 0; i < Container.size(); i++){
        if (Container[i] == param)
            return true;
    };
    return false;
    // throw std::out_of_range("Out Range !");
};

#include "easyfind.tpp"
#endif