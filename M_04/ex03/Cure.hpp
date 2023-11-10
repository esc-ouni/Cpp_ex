/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:32:35 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 15:47:45 by idouni           ###   ########.fr       */
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

#endif

