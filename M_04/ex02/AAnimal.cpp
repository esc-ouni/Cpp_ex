/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:55:26 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 17:18:25 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    this->type = "AAnimal";
    std::cout << "AAnimal Default Constructor Called" << std::endl;
};

AAnimal::AAnimal(AAnimal const &r_inst){
    *this = r_inst;        
    std::cout << "AAnimal copy Constructor Called" << std::endl;
};

AAnimal &AAnimal::operator=(AAnimal const &r_inst){
    this->type = r_inst.type;
    std::cout << "AAnimal copy assignement Constructor Called" << std::endl;
    return (*this);
};

AAnimal::~AAnimal(){
    std::cout << "AAnimal Destructor Called" << std::endl;
};

std::string AAnimal::getType() const{
    return (this->type);
};
