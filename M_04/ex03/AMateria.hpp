/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:40:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 17:40:59 by idouni           ###   ########.fr       */
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
        // AMateria 
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

// file.cpp:42:42: error: childish behaviour 'this->corrector'
#endif