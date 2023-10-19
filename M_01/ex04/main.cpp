/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:22 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 17:09:09 by idouni           ###   ########.fr       */
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
    std::size_t   pos = 0;

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
    infile.close();
    outfile.close();
    return (0);
}

