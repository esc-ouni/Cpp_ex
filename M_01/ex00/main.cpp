/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:43:14 by idouni            #+#    #+#             */
/*   Updated: 2023/10/28 18:45:20 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *a_Zombie;
    Zombie Zombiee("KOLLS");
    Zombie Zombiea("HOLLS");

    a_Zombie = newZombie("NULL");

    randomChump("VOLLS");
    Zombiea.announce();
    Zombiee.announce();
    if (!a_Zombie)
        std::cout << "Error: Can't create a Zombie" << std::endl;
    else{
        a_Zombie->announce();
        delete a_Zombie;
    }
}
