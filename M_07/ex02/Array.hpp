#ifndef __ARRAY_HPP_
#define __ARRAY_HPP_

#include <iostream>

template <typename T>
class Array{
    private:
        T            *elements;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &r_inst);
        Array &operator=(Array const &r_inst);
        ~Array();

        T &operator[](unsigned int index);
        T operator[](unsigned int index) const;
        unsigned int size();

};

#include "Array.tpp"
#endif