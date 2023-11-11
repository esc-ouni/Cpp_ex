/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:45:42 by idouni            #+#    #+#             */
/*   Updated: 2023/11/11 09:38:22 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(AMateria const &r_inst){
    (void)r_inst;
};

AMateria::AMateria(){
};

AMateria &AMateria::operator=(AMateria const &r_inst){
    (void)r_inst;
    return (*this);
};

AMateria::~AMateria(){
};

AMateria::AMateria(std::string const &type){
    this->type = type;
};

std::string const &AMateria::getType() const{
    return (this->type);
};

void AMateria::use(ICharacter& target){
    (void)target;
    std::cout << "Magic of Polymorphism !" << std::endl;
};
