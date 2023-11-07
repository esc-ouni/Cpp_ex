/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:31:46 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 18:32:02 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
};

WrongAnimal::WrongAnimal(std::string &type){
    this->type = type;
    std::cout << "WrongAnimal Constructor Called" << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal const &r_inst){
    *this = r_inst;        
    std::cout << "WrongAnimal copy Constructor Called" << std::endl;
};

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &r_inst){
    this->type = r_inst.type;
    std::cout << "WrongAnimal copy assignement Constructor Called" << std::endl;
    return (*this);
};

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor Called" << std::endl;
};

std::string WrongAnimal::getType() const{
    return (this->type);
};

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal Sound" << std::endl;
};
