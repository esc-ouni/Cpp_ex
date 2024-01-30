#include "Span.hpp"

Span::Span(){
    this->_N = 0;
    this->_storage = NULL;
};

Span::Span(unsigned int N){
    this->_N = N;
    try{
        this->_storage = new int[N];
    }
    catch(const std::exception& e){
        // std::cerr << e.what() << '\n';
    }
    
    //create a storage with N elements 
};

Span::Span(Span const &r_inst){
    this->_N = 0;
    this->_storage = NULL;
    (*this) = r_inst;
};

Span &Span::operator=(Span const &r_inst){
    this->_N = N;
    (void)r_inst;
    return (*this);
};

Span::~Span(){
};

void Span::addNumber(unsigned int element){
    (void)element;
    //insert element in storage
};

unsigned int Span::shortestSpan(){
    // 
    return 0;
};

unsigned int Span::longestSpan(){
    // 
    return 0;
};
