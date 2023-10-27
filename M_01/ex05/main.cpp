/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:37:56 by idouni            #+#    #+#             */
/*   Updated: 2023/10/27 18:05:43 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void _err(std::string err_msg){
    std::cerr << "==> Err: " + err_msg << std::endl;
}

int   _check_level(std::string string){
    if (string.empty())
        return (_err("Not A Valid Input"), -1);

	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++){
		if (msg[i] == string){
			return (i);
        }
	}
    return (_err("Not A Valid Input"), -1);
}

int main()
{
    Harl Harl;

    Harl.complain("0");
    Harl.complain("DEBUG");
    Harl.complain("DEBUGg");
    Harl.complain("+-debug");
    Harl.complain("INFO");
    Harl.complain("INF");
    Harl.complain("6");
    Harl.complain("WARNING1");
    Harl.complain("WARNIN");
    Harl.complain("WARNING");
    Harl.complain("ERROR");

    return (0);
}
