#include "Span.hpp"

Span::Span(){
    this->_Capacity = 0;
    this->_Size     = 0;
    this->_storage  = NULL;
};

Span::Span(unsigned int N){
    this->_Capacity = N;
    this->_Size     = 0;
    try{
        this->_storage = new int[N];
    }
    catch(const std::exception& e){
        throw std::runtime_error("Memory problem !");
    }
    for (size_t i = 0; i < this->_Capacity; i++){
        bzero(&(this->_storage[i]), sizeof(int));
    }
};

Span::Span(Span const &r_inst){
    this->_Capacity = 0;
    this->_Size     = 0;
    this->_storage  = NULL;
    (*this) = r_inst;
};

Span &Span::operator=(Span const &r_inst){
    this->_Capacity = r_inst._Capacity;
    this->_Size = r_inst._Size;
    if (this != &r_inst){
        if (this->_storage && this->_Capacity){
            delete[] this->_storage;
            this->_storage = NULL;
        }
        try{
            this->_storage = new int[this->_Capacity];
        }
        catch(...){
            throw std::runtime_error("Memory problem !");
        }
        for (size_t i = 0; i < this->_Capacity; i++){
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
    if (idx < _Capacity){
        return (this->_storage[idx]);
    }
    return (0);
};


void Span::addNumber(int element){
    if (this->_Size < this->_Capacity){
        this->_storage[this->_Size] = element;
        if (this->_Size == UINT_MAX)
            throw std::overflow_error("Overflow error !");
        this->_Size++;
    }
};

unsigned int Span::longestSpan(){
    if (this->_Size <= 1){
        throw std::range_error("No span can be found !");
    }
    int _min = INT_MAX;
    int _max = INT_MIN;

    for (size_t i = 0; i < this->_Size; i++){
        if (this->_storage[i] <= _min)
            _min = this->_storage[i];
        if (this->_storage[i] >= _max)
            _max = this->_storage[i];
    }
    return (std::abs(_max - _min));
};


unsigned int Span::shortestSpan(){
    if (this->_Size <= 1){
        throw std::range_error("No span can be found !");
    }
    int intArray[this->_Size];
    int _short_span = INT_MAX;
    int _prev_elem = 0, _this_elem = 0;

    for (size_t i = 0; i < this->_Size; i++)
        intArray[i] = this->getNumber(i);

    std::sort(intArray, intArray + this->_Size);

    _prev_elem = intArray[0];
    _this_elem = intArray[1];
    for (size_t i = 0; i < this->_Size; i++){
        i ? _this_elem = intArray[i] : _this_elem;
        if (fabs(_this_elem - _prev_elem) <= _short_span)
            _short_span = fabs(_this_elem - _prev_elem);
        _prev_elem = intArray[i];
    }
    return _short_span;
};
