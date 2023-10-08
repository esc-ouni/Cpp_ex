#include "Fixed.hpp"

Fixed::Fixed(void){
};

Fixed::Fixed(Fixed &r_inst){
};

Fixed &Fixed::operator=(Fixed &r_inst){
    this->fixed_point = r_inst.fixed_point;
    this->raw_bits = r_inst.raw_bits;
    return (*this);
};

Fixed::~Fixed(void){
};

int Fixed::getRawBits(void) const{
    return (this->raw_bits);
};

void Fixed::setRawBits(int const raw){
    this->raw_bits = raw;
};