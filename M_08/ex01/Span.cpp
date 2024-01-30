#include "Span.hpp"

Span::Span(){
    this->_N = 0;
    this->_i = 0;
    this->_storage = NULL;
};

Span::Span(unsigned int N){
    this->_N = N;
    this->_i = 0;
    try{
        this->_storage = new int[N];
    }
    catch(const std::exception& e){
        throw std::runtime_error("Memory problem !");
    }
    for (size_t i = 0; i < this->_N; i++){
        bzero(&(this->_storage[i]), sizeof(int));
    }
};

Span::Span(Span const &r_inst){
    this->_N = 0;
    this->_i = 0;
    this->_storage = NULL;
    (*this) = r_inst;
};

Span &Span::operator=(Span const &r_inst){
    this->_N = r_inst._N;
    this->_i = r_inst._i;
    if (this != &r_inst){
        if (this->_storage && this->_N){
            delete[] this->_storage;
            this->_storage = NULL;
        }
        try{
            this->_storage = new int[this->_N];
        }
        catch(...){
            throw std::runtime_error("Memory problem !");
        }
        for (size_t i = 0; i < this->_N; i++){
            this->_storage[i] = r_inst._storage[i];
        }
    }
    return (*this);
};

Span::~Span(){
    delete[] this->_storage;
    this->_storage = NULL;
};

int Span::getNumber(unsigned int idx){
    if (idx < _N){
        return (this->_storage[idx]);
    }
    return (0);
};


void Span::addNumber(unsigned int element){
    (void)element;
    if (this->_i < this->_N){
        this->_storage[this->_i] = element;
        this->_i++;
        //maxx case
    }
};

unsigned int Span::longestSpan(){
    if (this->_i <= 1){
        throw std::range_error("No span can be found !");
    }
    int _min = INT_MAX;
    int _max = INT_MIN;

    for (size_t i = 0; i < this->_i; i++){
        if (this->_storage[i] <= _min)
            _min = this->_storage[i];
        if (this->_storage[i] >= _max)
            _max = this->_storage[i];
    }
    return (std::abs(_max - _min));
    // return 0;
};


unsigned int Span::shortestSpan(){
    if (this->_i <= 1){
        throw std::range_error("No span can be found !");
    }
    int intArray[this->_i];
    int _short_span = INT_MAX;
    int _prev_elem = 0, _this_elem = 0;

    for (size_t i = 0; i < this->_i; i++)
        intArray[i] = this->getNumber(i);

    std::sort(intArray, intArray + this->_i);

    _prev_elem = intArray[0];
    _this_elem = intArray[1];
    for (size_t i = 0; i < this->_i; i++){
        i ? _this_elem = intArray[i] : _this_elem;
        if (fabs(_this_elem - _prev_elem) <= _short_span)
            _short_span = fabs(_this_elem - _prev_elem);
        _prev_elem = intArray[i];
    }


    return _short_span;
};
