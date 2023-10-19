/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:22 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 17:42:45 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedfl.hpp"

int main(int argc, char *argv[])
{
    __init(argc, argv);
    std::string   line;
    std::string   needle;
    std::string   tobe_add;
    std::ifstream infile;
    std::ofstream outfile;

    needle = argv[2];
    tobe_add = argv[3];
    line.clear();
    
    infile.open(argv[1]);
    if (infile.fail())
        exit_err("Failed to open your file");
        
    outfile.open((line += argv[1]) += ".replace");
    if (outfile.fail())
        exit_err("Failed to open your file");
    line.clear();
    
    do_what_sed_does(infile, outfile, line, needle, tobe_add);
    return (0);
}

