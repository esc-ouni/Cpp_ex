#ifndef __MUTANT_STACK_HPP_
#define __MUTANT_STACK_HPP_

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    private:
    public:
        MutantStack();
        MutantStack(MutantStack const &r_inst);
        MutantStack &operator=(MutantStack const &r_inst);
        ~MutantStack();

        // iterators
        // begin();
        // end();
};

#include "MutantStack.tpp"
#endif