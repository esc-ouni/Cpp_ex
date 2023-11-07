/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:55:26 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 15:26:17 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->type = "";
    std::cout << "Dog Default Constructor Called" << std::endl;
};

Dog::Dog(std::string &type){
    this->type = type;
    std::cout << "Dog Constructor Called" << std::endl;
};

Dog::Dog(Dog const &r_inst){
    *this = r_inst;        
    std::cout << "Dog copy Constructor Called" << std::endl;
};

Dog &Dog::operator=(Dog const &r_inst){
    this->type = r_inst.type;
    std::cout << "Dog copy assignement Constructor Called" << std::endl;
    return (*this);
};

Dog::~Dog(){
    std::cout << "Dog Destructor Called" << std::endl;
};

void Dog::makeSound(){
    std::cout << "Dog Sound" << std::endl;
};
