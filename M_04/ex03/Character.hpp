/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:55:08 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 14:09:10 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CHARACTER_HPP_
#define __CHARACTER_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character: public ICharacter{
    private:
        int         idxx;
        std::string name;
        AMateria    *inventory[4];
        
    public:
        Character();
        Character(std::string name);
        Character(Character const &r_inst);
        Character &operator=(Character const &r_inst);
        
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif