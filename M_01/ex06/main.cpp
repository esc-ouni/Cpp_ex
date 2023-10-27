/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:39:09 by idouni            #+#    #+#             */
/*   Updated: 2023/10/27 17:10:51 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// void leak(){std::system("leaks Zombie | grep \" leaks \" | awk \'{print \" ==> \" $4\" \"$3}\'");}

int main(int argc, char *argv[])
{
    __init(argc, argv);
    Harl    Harl;

    Harl.complain(argv[1]);    
    return 0;
}
