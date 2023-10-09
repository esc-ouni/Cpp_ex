#include "Fixed.hpp"

Fixed::Fixed(void){
};

Fixed::Fixed(Fixed &r_inst){
    this->fixed_point = r_inst.fixed_point;
    this->raw_bits = r_inst.getRawBits();
};

// Fixed &Fixed::operator=(Fixed &r_inst){
// };

void    Fixed::operator<<(std::ostream &o){
    o << this->fixed_point;
};

Fixed::~Fixed(void){
};

int Fixed::getRawBits(void) const{
    return (this->raw_bits);
};

void Fixed::setRawBits(int const raw){
    this->raw_bits = raw;
};

Fixed::Fixed(const int num_to_convert){
    this->fixed_point = num_to_convert;
};

Fixed::Fixed(const float num_to_convert){
    this->fixed_point = num_to_convert;
};

float Fixed::toFloat( void ) const{
    return((float)this->fixed_point);
};

int Fixed::toInt( void ) const{
    return((int)this->fixed_point);
};