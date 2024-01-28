#ifndef __ITER_HPP_
#define __ITER_HPP_

#include <iostream>

template <typename T>
void iter(T *Array, int length, void (*Func)(T &param)){
    for (int i = 0; i < length; i++){
        Func(Array[i]);
    }
};

#endif