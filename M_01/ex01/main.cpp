/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:07 by idouni            #+#    #+#             */
/*   Updated: 2023/10/27 17:24:24 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int    N = 10;
    Zombie  *Zombies = zombieHorde(N ,"HREDD");
    
    if (Zombies){    
        for (int i = 0; i < N; i++){
            Zombies[i].announce();
        }
        delete[] Zombies;
    }
}
