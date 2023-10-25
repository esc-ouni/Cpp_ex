/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:43:22 by idouni            #+#    #+#             */
/*   Updated: 2023/10/25 19:27:51 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_
# define __SCAV_TRAP_

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(std::string Name): ClapTrap(Name){
            this->Name = Name;
            this->Hit_Points = 100;
            this->Energy_Points = 50;
            this->Attack_Damage = 20;
            std::cout << "Scavtrap " << this->Name << "\tconstructor called" << std::endl;
        };
        void guardGate();
};

#endif