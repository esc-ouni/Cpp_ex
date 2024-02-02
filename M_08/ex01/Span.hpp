#ifndef __SPAN_HPP_
#define __SPAN_HPP_

#include <iostream>
#include <algorithm>
class Span{
    private:
        int          *_storage;
        unsigned int _Capacity;
        unsigned int _Size;
    public:
    
        // std::initializer_list
        Span();
        Span(unsigned int N);
        Span(Span const &r_inst);
        Span &operator=(Span const &r_inst);
        ~Span();

        void addNumber(unsigned int element);
        int  getNumber(unsigned int idx);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};


#endif