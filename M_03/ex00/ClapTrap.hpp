/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:06:24 by idouni            #+#    #+#             */
/*   Updated: 2023/10/22 19:15:14 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAP_TRAP_
# define __CLAP_TRAP_

# include <iostream>
# include <string>

class ClapTrap{
        std::string  Name;
        int          Hit_Points;
        int          Energy_Points;
        int          Attack_Damage;
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