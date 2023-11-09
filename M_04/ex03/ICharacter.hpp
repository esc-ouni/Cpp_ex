/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:55:08 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 19:01:06 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_HPP_
#define __ICHARACTER_HPP_

#include <iostream>

class ICharacter{
    public:
        virtual ~ICharacter() = 0;
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif