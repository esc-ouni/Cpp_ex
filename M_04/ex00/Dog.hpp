/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 14:17:58 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal{
    public:
        Dog();
        Dog(std::string &type);
        Dog(Dog const &r_inst);
        Dog &operator=(Dog const &r_inst);
        ~Dog();

        // void makeSound();

};

Dog::Dog(){
    this->type = "";
    std::cout << "Dog Default Constructor Called" << std::endl;
};

Dog::Dog(std::string &type){
    this->type = type;
    std::cout << "Dog Constructor Called" << std::endl;
};

Dog &Dog::operator=(Dog const &r_inst){
    this->type = r_inst.type;
    std::cout << "Dog copy assignement Constructor Called" << std::endl;
    return (*this);
};

Dog::Dog(Dog const &r_inst){
    *this = r_inst;        
    std::cout << "Dog copy Constructor Called" << std::endl;
};

Dog::~Dog(){
    std::cout << "Dog Destructor Called" << std::endl;
};

// void Dog::makeSound(){
//     std::cout << "Dog Sound" << std::endl;
// };


#endif