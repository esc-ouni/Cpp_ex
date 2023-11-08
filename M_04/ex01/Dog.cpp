/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:55:26 by idouni            #+#    #+#             */
/*   Updated: 2023/11/08 19:22:50 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog Default Constructor Called" << std::endl;
};

Dog::Dog(std::string type){
    this->type = type;
    this->brain = new Brain();
    std::cout << "Dog Constructor Called" << std::endl;
};

Dog::Dog(Dog const &r_inst){
    this->brain = new Brain();
    *this = r_inst;        
    std::cout << "Dog copy Constructor Called" << std::endl;
};

Dog &Dog::operator=(Dog const &r_inst){
    if (this == &r_inst){
        std::cout << "Copy Paste !" << std::endl;
        return (*this);
    }
    this->type = r_inst.type;
    std::cout << "Dog copy assignement Constructor Called" << std::endl;
    return (*this);
};

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog Destructor Called" << std::endl;
};

void Dog::makeSound() const{
    std::cout << "Dog Sound" << std::endl;
};
