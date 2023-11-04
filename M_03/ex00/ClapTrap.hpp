/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:06:24 by idouni            #+#    #+#             */
/*   Updated: 2023/11/04 16:40:53 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAP_TRAP_
# define __CLAP_TRAP_

# include <iostream>
# include <string>

class ClapTrap{
    protected:
        std::string     Name;
        unsigned int    Hit_Points;
        unsigned int    Energy_Points;
        unsigned int    Attack_Damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &obj);
        ~ClapTrap();
        ClapTrap &operator=(ClapTrap const &obj);
        
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif