#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed &r_inst){
    std::cout << "Copy constructor called" << std::endl;
    *this = r_inst;
};

Fixed &Fixed::operator=(Fixed &r_inst){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = r_inst.fixed_point;
    this->fixed_point = r_inst.getRawBits();
    return (*this);
};

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
};

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
};