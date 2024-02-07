#ifndef __SPAN_HPP_
#define __SPAN_HPP_

#include <iostream>
#include <algorithm>
#include <vector>

class Span{
    private:
        int          *_storage;
        unsigned int _Capacity;
        unsigned int _Size;
    public:
    
        Span();
        Span(unsigned int N);
        Span(Span const &r_inst);
        Span &operator=(Span const &r_inst);
        ~Span();

        void addNumber(int element);
        int  getNumber(unsigned int idx);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        template <typename T>
        void Ranges(T begin, T end);
};

template <typename T>
void Span::Ranges(T begin, T end){
    for (T iter = begin; iter != end; ++iter){
        this->addNumber(*iter);
    }    
};

#endif