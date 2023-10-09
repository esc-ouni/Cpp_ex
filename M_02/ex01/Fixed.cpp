#include "Fixed.hpp"

Fixed::Fixed(void){
};

Fixed::Fixed(Fixed &r_inst){
};

Fixed &Fixed::operator=(Fixed &r_inst){
};

Fixed &Fixed::operator<<(Fixed &r_inst){
};

Fixed::~Fixed(void){
};

int Fixed::getRawBits(void) const{
    return (this->raw_bits);
};

void Fixed::setRawBits(int const raw){
};

Fixed::Fixed(const int num_to_convert){
};

Fixed::Fixed(const float num_to_convert){
};

float Fixed::toFloat( void ) const{
};

int Fixed::toInt( void ) const{
};