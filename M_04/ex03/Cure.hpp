/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:32:35 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 11:16:59 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP_
#define __CURE_HPP_

#include <iostream>
#include "AMateria.hpp"


class Cure: public AMateria{
    public:
        Cure();
        Cure(Cure const &r_inst);
        Cure &operator=(Cure const &r_inst);
        ~Cure();
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

Cure::Cure(){
    this->type = "cure";
    std::cout << "Cure Constructor Called !";
};

Cure::Cure(Cure const &r_inst){
    *(this) = r_inst;
};

Cure &Cure::operator=(Cure const &r_inst){
    this->type = r_inst.type;
    return (*(this));
};

Cure::~Cure(){
    std::cout << "Cure Destructor Called !";
};

AMateria* Cure::clone() const{
    return ((new Cure));
};

void Cure::use(ICharacter& target){
    std::cout << "Cure: \"* heals " << target.getName() << "’s wounds *" << std::endl;
};
#endif

