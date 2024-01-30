#ifndef __SPAN_HPP_
#define __SPAN_HPP_

#include <iostream>

class Span{
    private:
        int          *_storage;
        unsigned int _N;
    public:
        Span();
        Span(unsigned int N);
        Span(Span const &r_inst);
        Span &operator=(Span const &r_inst);
        ~Span();

        void addNumber(unsigned int element);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};


#endif