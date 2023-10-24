/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:46:46 by idouni            #+#    #+#             */
/*   Updated: 2023/10/24 17:36:30 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("clap");
    ClapTrap clap2("clap2");
    ClapTrap clap3(clap2);
    clap2.attack("clap");
    clap2.takeDamage(50000);
    clap2.attack("clap");
    clap1.beRepaired(5);
    clap2.beRepaired(5);
    clap3.attack("clap2");
    clap3.attack("clap2");
    
    return 0;
}