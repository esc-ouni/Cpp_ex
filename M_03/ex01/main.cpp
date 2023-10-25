/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:46:46 by idouni            #+#    #+#             */
/*   Updated: 2023/10/25 19:35:04 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap1("clap");
    
    ScavTrap scav1("scav");

    scav1.attack("clap");
    scav1.attack("clap");
    scav1.attack("clap");
    scav1.attack("clap");
    scav1.attack("clap");
    clap1.takeDamage(100);
    clap1.attack("scav");
    clap1.beRepaired(5);
    scav1.beRepaired(10);
    scav1.guardGate();
    
    return 0;
}