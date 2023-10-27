/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:24:00 by idouni            #+#    #+#             */
/*   Updated: 2023/10/27 15:52:54 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP_
# define __DIAMOND_TRAP_

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap{
    private:
        std::string _name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &r_inst);
        ~DiamondTrap();
        DiamondTrap &operator=(DiamondTrap const &r_inst);
        
        void whoAmI();
};

#endif