/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:55:26 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 14:36:05 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog Default Constructor Called" << std::endl;
};

Dog::Dog(Dog const &r_inst){
    this->brain = new Brain();
    *this = r_inst;       
    std::cout << "Dog copy Constructor Called" << std::endl;
};

Dog &Dog::operator=(Dog const &r_inst){
    if (this != &r_inst){
        *(this->brain) = *(r_inst.brain);
        // this->brain = r_inst.brain;
    }
    std::cout << "Dog copy assignement Constructor Called" << std::endl;
    return (*this);
};

Dog::~Dog(){
    delete this->brain;
    this->brain = NULL;
    std::cout << "Dog Destructor Called" << std::endl;
};

void Dog::makeSound() const{
    std::cout << "Dog Sound" << std::endl;
};

std::string Dog::getIdea(int index) const{
    return (this->brain->getIdea(index));
};

void Dog::setIdea(int index, std::string idea){
    this->brain->setIdea(index, idea);
};

