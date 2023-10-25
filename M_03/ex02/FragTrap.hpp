/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:27:20 by idouni            #+#    #+#             */
/*   Updated: 2023/10/25 20:38:11 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAG_TRAP_
# define __FRAG_TRAP_

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>


class FragTrap : public ClapTrap{
    public:
        FragTrap(std::string Name): ClapTrap(Name){
            this->Name = Name;
            this->Hit_Points = 100;
            this->Energy_Points = 100;
            this->Attack_Damage = 30;
            std::cout << "Fragtrap " << this->Name << "\tconstructor called (in diffrent way)" << std::endl;
        };
        ~FragTrap(){
            std::cout << "Fragtrap " << this->Name << "\tdestructor called (in diffrent way)" << std::endl;
        };
        void highFivesGuys(void);
};


#endif