/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:43:14 by idouni            #+#    #+#             */
/*   Updated: 2023/10/27 17:08:53 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void leak(){std::system("leaks Zombie | grep \" leaks \" | awk \'{print \" ==> \" $4\" \"$3}\'");}

int main()
{
    atexit(leak);
    Zombie *a_Zombie;
    Zombie *b_Zombie;
    Zombie Zombiee("KOLLS");
    Zombie Zombiea("HOLLS");

    a_Zombie = newZombie("NULL");
    b_Zombie = newZombie("BOLLS");

    Zombiea.announce();
    Zombiee.announce();
    a_Zombie->announce();
    b_Zombie->announce();

    delete a_Zombie;
    delete b_Zombie;
}
