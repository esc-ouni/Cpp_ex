/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedfl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:08:06 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 17:08:50 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedfl.hpp"

void exit_err(std::string err_msg){
    std::cerr << "==> Err: " + err_msg << std::endl;
    std::exit(1);
}

void __init(int argc, char *argv[]){
    std::string holder;

    if (argc == 4){
        for (int i = 1; i < 4; i++){
            holder = argv[i];
            if (argv[i] && holder.empty())
                exit_err("Parse part");
            holder.clear();
        }
        return ;
    }
    exit_err("Parse part");
}