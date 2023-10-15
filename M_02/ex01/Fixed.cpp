#include "Fixed.hpp"

Fixed::Fixed(void){
    this->fixed_point = 0;
};

Fixed::Fixed(Fixed &r_inst){
    this->fixed_point = r_inst.getRawBits();
};

Fixed &Fixed::operator=(Fixed &r_inst){
    this->fixed_point = r_inst.getRawBits();
    return (*this);
};

std::ostream &operator<<(std::ostream &cout, Fixed &r_inst){
    cout << r_inst.toFloat();
    return (cout);
};

Fixed::~Fixed(void){
};

int Fixed::getRawBits(void) const{
    return (this->fixed_point);
};

void Fixed::setRawBits(int const raw){
    this->fixed_point = raw;
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