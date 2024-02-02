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
    this->c.operator=(r_inst.c);
    return (*this);
};

template <typename T>
MutantStack<T>::~MutantStack(){
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return (this->c.begin());
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return (this->c.end());
};
