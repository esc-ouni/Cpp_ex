#ifndef __ITER_HPP_
#define __ITER_HPP_

#include <iostream>

template <typename T, typename Z>
void iter(T *Array, int length, Z Func){
    if (!Array)
        return ;
    for (int i = 0; i < length; i++){
        Func(Array[i]);
    }
};

template <typename T>
void print(T &element) {
    std::cout << element << std::endl;
    return;
};

#endif