#include "Fixed.hpp"

Fixed::Fixed(void){
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed const &r_inst){
    std::cout << "Copy constructor called" << std::endl;
    *this = r_inst;
};

Fixed::Fixed(const int num_to_convert){
    std::cout << "Int constructor called" << std::endl;
    if (num_to_convert > 8388607 || num_to_convert < -8388608){
        this->fixed_point = num_to_convert << 8;
    }
    else
        std::cout << "Num to convert out of range" << std::endl;
};

Fixed::Fixed(const float num_to_convert){
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = num_to_convert;
};

Fixed &Fixed::operator=(Fixed const &r_inst){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = r_inst.getRawBits();
    return (*this);
};

std::ostream &operator<<(std::ostream &cout, Fixed const &r_inst){
    cout << r_inst.toFloat();
    return (cout);
};

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
};

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
};

float Fixed::toFloat( void ) const{
    return(VALUE);
};

int Fixed::toInt( void ) const{
    return(VALUE);
};

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
};
