/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:46:46 by idouni            #+#    #+#             */
/*   Updated: 2023/10/25 21:19:13 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("clap");
    
    ScavTrap scav("scav");
    
    FragTrap frag("frag");

    scav.attack("clap");
    scav.attack("clap");
    scav.attack("clap");
    scav.attack("clap");
    scav.attack("clap");
    frag.attack("scav");
    scav.takeDamage(30);
    scav.attack("frag");
    frag.takeDamage(20);
    clap.takeDamage(100);
    clap.attack("scav");
    clap.beRepaired(5);
    scav.beRepaired(10);
    scav.guardGate();
    frag.highFivesGuys();
    
    return 0;
}