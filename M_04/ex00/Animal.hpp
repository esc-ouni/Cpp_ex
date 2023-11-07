/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 14:17:32 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string &type);
        Animal(Animal const &r_inst);
        Animal &operator=(Animal const &r_inst);
        ~Animal();

        std::string getType() const;
        void makeSound() const;
};

Animal::Animal(){
    this->type = "";
    std::cout << "Animal Default Constructor Called" << std::endl;
};

Animal::Animal(std::string &type){
    this->type = type;
    std::cout << "Animal Constructor Called" << std::endl;
};

Animal &Animal::operator=(Animal const &r_inst){
    this->type = r_inst.type;
    std::cout << "Animal copy assignement Constructor Called" << std::endl;
    return (*this);
};

Animal::Animal(Animal const &r_inst){
    *this = r_inst;        
    std::cout << "Animal copy Constructor Called" << std::endl;
};

Animal::~Animal(){
    std::cout << "Animal Destructor Called" << std::endl;
};

void Animal::makeSound() const{
    std::cout << "Animal Sound" << std::endl;
};

std::string Animal::getType() const{
    return (this->type);
};

#endif