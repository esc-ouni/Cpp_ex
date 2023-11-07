/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:55:26 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 18:35:02 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(){
    this->type = "WrongDog";
    std::cout << "WrongDog Default Constructor Called" << std::endl;
};

WrongDog::WrongDog(std::string &type){
    this->type = type;
    std::cout << "WrongDog Constructor Called" << std::endl;
};

WrongDog::WrongDog(WrongDog const &r_inst){
    *this = r_inst;        
    std::cout << "WrongDog copy Constructor Called" << std::endl;
};

WrongDog &WrongDog::operator=(WrongDog const &r_inst){
    this->type = r_inst.type;
    std::cout << "WrongDog copy assignement Constructor Called" << std::endl;
    return (*this);
};

WrongDog::~WrongDog(){
    std::cout << "WrongDog Destructor Called" << std::endl;
};

void WrongDog::makeSound() const{
    std::cout << "WrongDog Sound" << std::endl;
};
