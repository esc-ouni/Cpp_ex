#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){
};

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &r_inst){
    (*this) = r_inst;
};

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &r_inst){
    (void)r_inst;
    return (*this);
};

template <typename T>
MutantStack<T>::~MutantStack(){
};
