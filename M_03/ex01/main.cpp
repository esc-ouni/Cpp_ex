/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:46:46 by idouni            #+#    #+#             */
/*   Updated: 2023/10/24 17:45:12 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("clap");
    ClapTrap clap2("clap2");
    ClapTrap clap3(clap2);
    ClapTrap clap4("clap4");
    ClapTrap clap5("clap5");

    clap5 = clap4;
    std::cout << std::endl;
    clap2.attack("clap");
    clap2.takeDamage(50000);
    clap2.attack("clap");
    clap1.beRepaired(5);
    clap2.beRepaired(5);
    
    clap4.attack("clap2");
    clap4.attack("clap2");
    clap4.attack("clap2");
    clap4.attack("clap2");
    clap4.attack("clap2");
    clap4.attack("clap2");
    clap4.attack("clap2");
    clap4.attack("clap2");
    clap4.attack("clap2");
    clap4.attack("clap2");

    clap4.attack("clap2");
    clap4.attack("clap2");
    clap5.attack("clap1");
    return 0;
}