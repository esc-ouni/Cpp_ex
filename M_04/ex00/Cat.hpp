/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 14:17:46 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP
#define __CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal{
    public:
        Cat();
        Cat(std::string &type);
        Cat(Cat const &r_inst);
        Cat &operator=(Cat const &r_inst);
        ~Cat();

        // void makeSound();
};

Cat::Cat(){
    this->type = "";
    std::cout << "Cat Default Constructor Called" << std::endl;
};

Cat::Cat(std::string &type){
    this->type = type;
    std::cout << "Cat Constructor Called" << std::endl;
};

Cat &Cat::operator=(Cat const &r_inst){
    this->type = r_inst.type;
    std::cout << "Cat copy assignement Constructor Called" << std::endl;
    return (*this);
};

Cat::Cat(Cat const &r_inst){
    *this = r_inst;        
    std::cout << "Cat copy Constructor Called" << std::endl;
};

Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
};

// void Cat::makeSound(){
//     std::cout << "Cat Sound" << std::endl;
// };


#endif