/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:22 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 17:41:02 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedfl.hpp"

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
            pos = line.find(needle);
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
        pos = line.find(needle);
    }
    outfile << line;
    infile.close();
    outfile.close();   
}

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

