/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:40:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 19:23:31 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP_
#define __AMATERIA_HPP_

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
    protected:
        // [...]
    public:
        AMateria(std::string const & type);
        // [...]
        std::string const &getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

AMateria::AMateria(std::string const & type){
};

std::string const &AMateria::getType() const{
};


void AMateria::use(ICharacter& target){
};




#endif