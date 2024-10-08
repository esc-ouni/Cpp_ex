/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:55:26 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 13:47:42 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
};

Cat::Cat(Cat const &r_inst){
    *this = r_inst;        
    std::cout << "Cat copy Constructor Called" << std::endl;
};

Cat &Cat::operator=(Cat const &r_inst){
    this->type = r_inst.type;
    std::cout << "Cat copy assignement Constructor Called" << std::endl;
    return (*this);
};

Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
};

void Cat::makeSound() const{
    std::cout << "Cat Sound" << std::endl;
};
