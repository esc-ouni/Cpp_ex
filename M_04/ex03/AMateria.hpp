/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:40:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 14:23:09 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP_
#define __AMATERIA_HPP_

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
    protected:
        std::string type;
        // [...]
    public:
        AMateria();
        AMateria(AMateria const &r_inst);
        AMateria(std::string const &type);
        AMateria &operator=(AMateria const &r_inst);
        
        virtual ~AMateria();
        // [...]

        
        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

AMateria::AMateria(AMateria const &r_inst){
    (void)r_inst;
};

AMateria::AMateria(){
    std::cout << "AMateria Default Constructor Called !" << std::endl;
};

AMateria &AMateria::operator=(AMateria const &r_inst){
    (void)r_inst;
    std::cout << "copying the type doesn’t make sense" << std::endl;
    return (*this);
};

AMateria::~AMateria(){
    std::cout << "AMateria Destructor Called !" << std::endl;
};

AMateria::AMateria(std::string const &type){
    this->type = type;
};

std::string const &AMateria::getType() const{
    return (this->type);
};

void AMateria::use(ICharacter& target){
    std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    std::cout << "Cure: \"* heals " << target.getName() << "’s wounds *" << std::endl;

};

// file.cpp:42:42: error: childish behaviour 'this->corrector'
#endif