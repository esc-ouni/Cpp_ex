/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:32:04 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 11:15:42 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP_
#define __ICE_HPP_

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria{
    public:
        Ice();
        Ice(Ice const &r_inst);
        Ice &operator=(Ice const &r_inst);
        ~Ice();
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

Ice::Ice(){
    this->type = "ice";
    std::cout << "Ice Constructor Called !";
};

Ice::Ice(Ice const &r_inst){
    *(this) = r_inst;
};

Ice &Ice::operator=(Ice const &r_inst){
    this->type = r_inst.type;
    return (*(this));
};

Ice::~Ice(){
    std::cout << "Ice Destructor Called !";
};

AMateria* Ice::clone() const{
    return ((new Ice));
};

void Ice::use(ICharacter& target){
    std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};

#endif