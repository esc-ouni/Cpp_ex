/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:31:47 by idouni            #+#    #+#             */
/*   Updated: 2023/11/11 09:36:07 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    this->type = "cure";
};

Cure::Cure(Cure const &r_inst){
    *(this) = r_inst;
};

Cure &Cure::operator=(Cure const &r_inst){
    this->type = r_inst.type;
    return (*(this));
};

Cure::~Cure(){
};

AMateria* Cure::clone() const{
    return ((new Cure));
};

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};
