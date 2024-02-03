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

        typedef typename std::deque<T>::const_iterator const_iterator;
        const_iterator cbegin() const;
        const_iterator cend() const;
};

#include "MutantStack.tpp"
#endif