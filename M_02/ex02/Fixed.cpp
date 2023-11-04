/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:41 by idouni            #+#    #+#             */
/*   Updated: 2023/11/04 20:01:49 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    this->fixed_point = 0;
};

Fixed::Fixed(Fixed const &r_inst){
    *this = r_inst;
};

Fixed::Fixed(const int num_to_convert){
    if (num_to_convert <= 8388607 && num_to_convert >= -8388608){
        this->fixed_point = num_to_convert << 8;
    }
    else
        std::cout << "Num to convert out of range" << std::endl;
};

Fixed::Fixed(const float num_to_convert){
    if (num_to_convert <= 8388607 && num_to_convert >= -8388608){
        this->fixed_point = std::roundf(num_to_convert * 256);
    }
    else
        std::cout << "Num to convert out of range" << std::endl;
};

Fixed &Fixed::operator=(Fixed const &r_inst){
    this->fixed_point = r_inst.getRawBits();
    return (*this);
};

std::ostream &operator<<(std::ostream &cout, Fixed const &r_inst){
    cout << r_inst.toFloat();
    return (cout);
};

bool  Fixed::operator>(Fixed const &r_inst){
    return (this->fixed_point > r_inst.getRawBits());
};

bool  Fixed::operator<(Fixed const &r_inst){
    return (this->fixed_point < r_inst.getRawBits());
};

bool  Fixed::operator>=(Fixed const &r_inst){
    return (this->fixed_point >= r_inst.getRawBits());
};

bool  Fixed::operator<=(Fixed const &r_inst){
    return (this->fixed_point <= r_inst.getRawBits());
};

bool  Fixed::operator==(Fixed const &r_inst){
    return (this->fixed_point == r_inst.getRawBits());
};

bool  Fixed::operator!=(Fixed const &r_inst){
    return (this->fixed_point != r_inst.getRawBits());
};

Fixed Fixed::operator+(Fixed const &r_inst){
    return (this->toFloat() + r_inst.toFloat());
};

Fixed Fixed::operator-(Fixed const &r_inst){
    return (this->toFloat() - r_inst.toFloat());
};

Fixed Fixed::operator*(Fixed const &r_inst){
    return (this->toFloat() * r_inst.toFloat());
};

Fixed Fixed::operator/(Fixed const &r_inst){
    return (this->toFloat() / r_inst.toFloat());
};

Fixed &Fixed::operator++(void){
    this->fixed_point += 1;
    return (*this);
};

Fixed  Fixed::operator++(int){
    Fixed ret;

    ret.setRawBits(this->fixed_point);
    this->fixed_point += 1;
    return (ret);
};

Fixed& Fixed::operator--(void){
    this->fixed_point -= 1;
    return (*this);
};

Fixed  Fixed::operator--(int){
    this->fixed_point -= 1;
    return (Fixed(this->fixed_point + 1));
};

Fixed &Fixed::min(Fixed &l_inst, Fixed &r_inst){
    if (l_inst < r_inst)
        return (l_inst);
    else
        return (r_inst);
};

Fixed const &Fixed::min(Fixed const &l_inst, Fixed const &r_inst){
    if (l_inst.getRawBits() < r_inst.getRawBits())
        return (l_inst);
    else
        return (r_inst);
};

Fixed &Fixed::max(Fixed &l_inst, Fixed &r_inst){
    if (l_inst > r_inst)
        return (l_inst);
    else
        return (r_inst);
};

Fixed const &Fixed::max(Fixed const &l_inst, Fixed const &r_inst){
    if (l_inst.getRawBits() > r_inst.getRawBits())
        return (l_inst);
    else
        return (r_inst);
};

int Fixed::getRawBits(void) const{
    return (this->fixed_point);
};

void Fixed::setRawBits(int const raw){
    this->fixed_point = raw;
};

float Fixed::toFloat( void ) const{
    return((float)this->fixed_point / 256);
};

int Fixed::toInt( void ) const{
    return((this->fixed_point >> 8));
};

Fixed::~Fixed(void){
};
