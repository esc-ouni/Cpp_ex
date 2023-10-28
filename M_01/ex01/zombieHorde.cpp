/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:32 by idouni            #+#    #+#             */
/*   Updated: 2023/10/28 18:46:41 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Zombies = NULL;
    if (N > 0){
        Zombies = new(std::nothrow) Zombie[N];
        if (Zombies){
            for (int i = 0; i < N; i++){
                Zombies[i].setName(name);
            }
            return (Zombies);
        }
    }
    return (Zombies);
}