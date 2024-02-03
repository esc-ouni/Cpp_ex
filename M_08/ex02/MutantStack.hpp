#ifndef __MUTANT_STACK_HPP_
#define __MUTANT_STACK_HPP_

#include <iostream>
#include <list>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T> {
    private:
    public:
        MutantStack();
        MutantStack(MutantStack const &r_inst);
        MutantStack &operator=(MutantStack const &r_inst);
        ~MutantStack();

        typedef typename std::deque<T>::iterator iterator;
        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"
#endif