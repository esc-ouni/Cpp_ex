/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:45:42 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 16:02:57 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(AMateria const &r_inst){
    (void)r_inst;
};

AMateria::AMateria(){
    // std::cout << "AMateria Default Constructor Called !" << std::endl;
};

AMateria &AMateria::operator=(AMateria const &r_inst){
    (void)r_inst;
    // this->type = r_inst.getType();
    // std::cout << "copying the type doesn’t make sense" << std::endl;
    return (*this);
};

AMateria::~AMateria(){
    // std::cout << "AMateria Destructor Called !" << std::endl;
};

AMateria::AMateria(std::string const &type){
    this->type = type;
};

std::string const &AMateria::getType() const{
    return (this->type);
};

void AMateria::use(ICharacter& target){
    (void)target;
    // std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    // std::cout << "Cure: \"* heals " << target.getName() << "'s wounds *" << std::endl;
    std::cout << "Hoe Hoe" << std::endl;
};
