/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:24:00 by idouni            #+#    #+#             */
/*   Updated: 2023/11/06 15:07:25 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP_
# define __DIAMOND_TRAP_

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &r_inst);
        ~DiamondTrap();
        DiamondTrap &operator=(DiamondTrap const &r_inst);
        
        void attack(std::string const &target);
        void whoAmI();
};

#endif