#include "Serializer.hpp"

Serializer::Serializer(){
};

Serializer::Serializer(Serializer const &r_inst){
    *this = r_inst;
};

Serializer &Serializer::operator=(Serializer const &r_inst){
    (void)r_inst;
    return (*this);
};

Serializer::~Serializer(){
};

uintptr_t Serializer::serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
};

Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
};
