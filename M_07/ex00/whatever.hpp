#ifndef __WHATEVER_HPP_
#define __WHATEVER_HPP_

#include <iostream>

template <typename T>
void swap(T &arg1, T &arg2){
    T Temp;
    Temp = arg1;
    arg1 = arg2;
    arg2 = Temp;
};

template <typename Y>
Y &min(Y &arg1, Y &arg2){
    return ((arg1 < arg2) ? arg1 : arg2);
};

template <typename Z>
Z &max(Z &arg1, Z &arg2){
    return ((arg1 > arg2) ? arg1 : arg2);
};

#endif