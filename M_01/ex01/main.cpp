/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:07 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 16:08:08 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *Zombies = zombieHorde(10 ,"HREDD");
    
    if (Zombies){    
        for (int i = 0; i < 10; i++){
            Zombies[i].announce();
        }
        delete[] Zombies;
    }
}
