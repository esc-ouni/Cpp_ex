/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:32:21 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 17:32:24 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    this->type = "ice";
    // std::cout << "Ice Constructor Called !";
};

Ice::Ice(Ice const &r_inst){
    *(this) = r_inst;
};

Ice &Ice::operator=(Ice const &r_inst){
    this->type = r_inst.type;
    return (*(this));
};

Ice::~Ice(){
    // std::cout << "Ice Destructor Called !" << std::endl;
};

AMateria* Ice::clone() const{
    return ((new Ice));
};

void Ice::use(ICharacter& target){
    std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};