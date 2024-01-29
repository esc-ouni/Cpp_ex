
template <typename T>
Array<T>::Array(){
    std::cout << "Constructor called " << std::endl;
    this->_size = 0;
    this->elements = NULL;
};

template <typename T>
Array<T>::Array(unsigned int n){
    this->_size = n;
    try{
        this->elements = new T[n];
        for (size_t i = 0; i < n; i++){
            bzero(&(this->elements[i]), sizeof(T));
        }
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl; throw std::runtime_error("Memory problem !");
    }
};

template <typename T>
Array<T>::Array(Array const &r_inst){
    this->_size = 0;
    this->elements = NULL;
    (*this) = r_inst;
};

template <typename T>
Array<T> &Array<T>::operator=(Array const &r_inst){
    this->_size = r_inst._size;
    if (this != &r_inst){
        if (this->_size && this->elements){
            delete this->elements;
            this->elements = NULL;
        }
        try{
            this->elements = new T[r_inst._size];
            for (size_t i = 0; i < r_inst._size; i++){
                this->elements[i] = r_inst.elements[i];
            }
        }
        catch(const std::exception& e){
            std::cerr << e.what() << std::endl; throw std::runtime_error("Memory problem !");
        }
    }
    else
        std::cout << "the same ~" << std::endl;
    return (*this);
};


template <typename T>
T  &Array<T>::operator[](unsigned int index){
    if (index >= this->_size)
        throw std::runtime_error("Bad access !");
    return this->elements[index];
};

template <typename T>
unsigned int Array<T>::size(){
    return (this->_size);
};

template <typename T>
Array<T>::~Array(){
    delete[] this->elements;
    this->elements = NULL;
};
