/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:32:04 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 15:47:34 by idouni           ###   ########.fr       */
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

#endif