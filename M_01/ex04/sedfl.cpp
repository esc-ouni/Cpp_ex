/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedfl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:08:06 by idouni            #+#    #+#             */
/*   Updated: 2023/10/31 14:23:04 by idouni           ###   ########.fr       */
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

void do_what_sed_does(std::ifstream &infile, std::ofstream &outfile, std::string &line,\
 std::string &needle, std::string &tobe_add){
    std::size_t   pos = 0;

    while (!getline(infile, line).eof())
    {
        pos = line.find(needle);
        while (pos != std::string::npos)
        {
            line.erase(pos, needle.length());
            line.insert(pos, tobe_add);
            pos = line.find(needle , pos + needle.length());
        }
        outfile << line << std::endl;
        line.clear();
        pos = 0;
    }
    pos = line.find(needle);
    while (pos != std::string::npos)
    {
        line.erase(pos, needle.length());
        line.insert(pos, tobe_add);
        pos = line.find(needle, pos + needle.length());
    }
    outfile << line;
    infile.close();
    outfile.close();   
}
