/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:18:46 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 13:17:06 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed &r_inst){
    std::cout << "Copy constructor called" << std::endl;
    *this = r_inst;
};

Fixed &Fixed::operator=(Fixed &r_inst){
    std::cout << "Copy assignment operator called" << std::endl;
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