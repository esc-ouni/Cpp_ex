/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:54:47 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 19:19:11 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Wout", 145, 137){
    std::ofstream   outfile("Wout_shrubbery");
    
    if (!outfile.is_open()){
        std::cerr << "err opening the file !" << std::endl;
        return ;   
    }

    outfile << 
                "                                                                ░░░░░░░░░░░░        ░░░░░░░░░░░░              \n"
                "                                                            ░░░░░░░░░░░░░░░░░░░░  ░░▒▒░░▒▒░░░░░░░░            \n"
                "                                      ░░░░░░░░░░░░░░      ░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░▒▒░░▒▒▒▒░░▒▒░░          \n"
                "                                  ░░░░░░░░░░░░░░░░░░░░  ░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▓▓          \n"
                "                                ░░░░░░▒▒░░░░░░░░░░░░░░░░▒▒░░░░░░░░░░▒▒░░▒▒░░░░░░░░░░▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓          \n"
                "                              ░░▒▒░░▒▒░░░░░░▒▒░░▒▒░░░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓            \n"
                "                              ▒▒░░▒▒░░▒▒░░▒▒░░░░░░▒▒░░▒▒░░░░▒▒░░░░▒▒▒▒▒▒░░░░▒▒░░▒▒░░▒▒▓▓▓▓▓▓▓▓▓▓░░            \n"
                "                              ▒▒▓▓▒▒▓▓▒▒▒▒░░▒▒▒▒▒▒░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▓▓  ░░░░░░░░░░░░          \n"
                "                              ▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒▒▒▒▒░░▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓░░░░░░▒▒░░▒▒░░░░░░      \n"
                "                              ▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒▒▒▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓▓▓▓▓░░▒▒░░▒▒▒▒▒▒░░▒▒░░▒▒░░    \n"
                "                              ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▒▒░░▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒░░    \n"
                "                              ░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░▒▒▒▒▒▒▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒      \n"
                "                                  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        ▒▒▒▒▒▒      ▓▓▓▓▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒      \n"
                "                                          ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒        ▓▓▒▒▒▒░░▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        \n"
                "                                ░░░░░░░░░░        ▓▓▓▓▓▓░░▓▓▓▓▒▒░░      ░░▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒            \n"
                "                            ░░░░░░░░░░░░░░░░░░░░░░░░        ▓▓▓▓▒▒░░    ▒▒▓▓▓▓▓▓▓▓                            \n"
                "                          ▒▒░░▒▒░░░░░░░░░░░░░░▒▒░░░░            ▓▓▒▒░░▒▒▓▓▓▓                                  \n"
                "                        ░░▒▒▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░░░░░          ▓▓▒▒▒▒▒▒      ░░░░░░      ░░░░░░            \n"
                "                        ▒▒▒▒▓▓▒▒░░▒▒░░▒▒░░▒▒▒▒▒▒░░▒▒░░░░          ▓▓▒▒▓▓▒▒  ░░░░░░░░░░░░░░░░░░░░░░░░░░        \n"
                "                        ▓▓▓▓▒▒▓▓▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ░░░░░░  ░░▒▒▓▓░░░░░░░░░░░░░░░░░░░░▒▒░░░░░░▒▒░░      \n"
                "                        ░░▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒░░▒▒▒▒▒▒▒▒  ▒▒▒▒░░░░░░░░░░▒▒░░░░░░▒▒░░▒▒░░▒▒░░▒▒      \n"
                "                          ▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒▒▒░░░░░░▒▒      \n"
                "                            ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒    ▓▓▓▓▓▓▒▒░░▒▒▒▒░░▒▒░░▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▓▓▒▒      \n"
                "                                    ▓▓▓▓▓▓▓▓▓▓                    ▓▓▓▓░░▓▓▒▒▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▒▒▓▓▓▓▓▓▒▒      \n"
                "                                                                  ░░▒▒░░▓▓▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓░░        \n"
                "                                                                ░░░░░░▒▒▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓            \n"
                "                                                              ░░░░▒▒▒▒▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░            \n"
                "                                                      ░░░░░░░░░░▒▒▒▒▓▓▓▓      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓                  \n"
                "                                                ░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓▓▓                                        \n"
                "                                              ░░░░░░░░▒▒▒▒▓▓▓▓▓▓▓▓▓▓░░                                        \n"
                "                                            ░░░░▒▒▒▒▒▒▓▓▓▓▓▓▓▓                                                \n"
                "                                          ░░░░▒▒▒▒▓▓▓▓▒▒                                                      \n"
                "                                          ░░░░▒▒▒▒▓▓▓▓                                                        \n"
                "                                        ░░░░▒▒▒▒▓▓▓▓▒▒▓▓▒▒                                                    \n"
                "                                      ░░░░░░▒▒▓▓▓▓▒▒▓▓▓▓▒▒▓▓                                                  \n"
                "                                  ▓▓▓▓▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒                                    \n"
                "                            ▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓                              \n"
                "                          ░░██▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██                              \n"
                "                          ▒▒██████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████████████████▓▓██                            \n"
                "                            ▒▒▒▒████▒▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▒▒▓▓██████                              \n"
                "                            ▒▒██████████████████████████████████████████████████                              \n"
                "                            ▒▒██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████                              \n"
                "                            ▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██                              \n"
                "                            ▒▒██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓██                              \n"
                "                              ██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓██                                \n"
                "                              ██▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓██                                \n"
                "        ░░░░░░░░░░░░░░░░░░░░░░██████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████░░░░░░░░░░░░░░░░░░░░░░░░░░      \n"
                "░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒████████████████████████████████████████████▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░░░\n"
                "░░░░░░░░░░░░░░░░░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░\n"
                "  ░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                "    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░    \n"
                "                                          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░                          \n"
                << std::endl;
    outfile.close();
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):AForm(target, 145, 137){
    std::ofstream   outfile(target + "_shrubbery");
    
    if (!outfile.is_open()){
        std::cerr << "err opening the file !" << std::endl;
        return ;  
    }
    outfile << 
                "                                                                ░░░░░░░░░░░░        ░░░░░░░░░░░░              \n"
                "                                                            ░░░░░░░░░░░░░░░░░░░░  ░░▒▒░░▒▒░░░░░░░░            \n"
                "                                      ░░░░░░░░░░░░░░      ░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░▒▒░░▒▒▒▒░░▒▒░░          \n"
                "                                  ░░░░░░░░░░░░░░░░░░░░  ░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▓▓          \n"
                "                                ░░░░░░▒▒░░░░░░░░░░░░░░░░▒▒░░░░░░░░░░▒▒░░▒▒░░░░░░░░░░▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓          \n"
                "                              ░░▒▒░░▒▒░░░░░░▒▒░░▒▒░░░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓            \n"
                "                              ▒▒░░▒▒░░▒▒░░▒▒░░░░░░▒▒░░▒▒░░░░▒▒░░░░▒▒▒▒▒▒░░░░▒▒░░▒▒░░▒▒▓▓▓▓▓▓▓▓▓▓░░            \n"
                "                              ▒▒▓▓▒▒▓▓▒▒▒▒░░▒▒▒▒▒▒░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▓▓  ░░░░░░░░░░░░          \n"
                "                              ▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒▒▒▒▒░░▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓░░░░░░▒▒░░▒▒░░░░░░      \n"
                "                              ▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒▒▒▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓▓▓▓▓░░▒▒░░▒▒▒▒▒▒░░▒▒░░▒▒░░    \n"
                "                              ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▒▒░░▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒░░    \n"
                "                              ░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░▒▒▒▒▒▒▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒      \n"
                "                                  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        ▒▒▒▒▒▒      ▓▓▓▓▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒      \n"
                "                                          ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒        ▓▓▒▒▒▒░░▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        \n"
                "                                ░░░░░░░░░░        ▓▓▓▓▓▓░░▓▓▓▓▒▒░░      ░░▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒            \n"
                "                            ░░░░░░░░░░░░░░░░░░░░░░░░        ▓▓▓▓▒▒░░    ▒▒▓▓▓▓▓▓▓▓                            \n"
                "                          ▒▒░░▒▒░░░░░░░░░░░░░░▒▒░░░░            ▓▓▒▒░░▒▒▓▓▓▓                                  \n"
                "                        ░░▒▒▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░░░░░          ▓▓▒▒▒▒▒▒      ░░░░░░      ░░░░░░            \n"
                "                        ▒▒▒▒▓▓▒▒░░▒▒░░▒▒░░▒▒▒▒▒▒░░▒▒░░░░          ▓▓▒▒▓▓▒▒  ░░░░░░░░░░░░░░░░░░░░░░░░░░        \n"
                "                        ▓▓▓▓▒▒▓▓▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ░░░░░░  ░░▒▒▓▓░░░░░░░░░░░░░░░░░░░░▒▒░░░░░░▒▒░░      \n"
                "                        ░░▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒░░▒▒▒▒▒▒▒▒  ▒▒▒▒░░░░░░░░░░▒▒░░░░░░▒▒░░▒▒░░▒▒░░▒▒      \n"
                "                          ▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒▒▒░░░░░░▒▒      \n"
                "                            ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒    ▓▓▓▓▓▓▒▒░░▒▒▒▒░░▒▒░░▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▓▓▒▒      \n"
                "                                    ▓▓▓▓▓▓▓▓▓▓                    ▓▓▓▓░░▓▓▒▒▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▒▒▓▓▓▓▓▓▒▒      \n"
                "                                                                  ░░▒▒░░▓▓▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓░░        \n"
                "                                                                ░░░░░░▒▒▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓            \n"
                "                                                              ░░░░▒▒▒▒▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░            \n"
                "                                                      ░░░░░░░░░░▒▒▒▒▓▓▓▓      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓                  \n"
                "                                                ░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓▓▓                                        \n"
                "                                              ░░░░░░░░▒▒▒▒▓▓▓▓▓▓▓▓▓▓░░                                        \n"
                "                                            ░░░░▒▒▒▒▒▒▓▓▓▓▓▓▓▓                                                \n"
                "                                          ░░░░▒▒▒▒▓▓▓▓▒▒                                                      \n"
                "                                          ░░░░▒▒▒▒▓▓▓▓                                                        \n"
                "                                        ░░░░▒▒▒▒▓▓▓▓▒▒▓▓▒▒                                                    \n"
                "                                      ░░░░░░▒▒▓▓▓▓▒▒▓▓▓▓▒▒▓▓                                                  \n"
                "                                  ▓▓▓▓▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒                                    \n"
                "                            ▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓                              \n"
                "                          ░░██▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██                              \n"
                "                          ▒▒██████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████████████████▓▓██                            \n"
                "                            ▒▒▒▒████▒▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▒▒▓▓██████                              \n"
                "                            ▒▒██████████████████████████████████████████████████                              \n"
                "                            ▒▒██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████                              \n"
                "                            ▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██                              \n"
                "                            ▒▒██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓██                              \n"
                "                              ██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓██                                \n"
                "                              ██▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓██                                \n"
                "        ░░░░░░░░░░░░░░░░░░░░░░██████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████░░░░░░░░░░░░░░░░░░░░░░░░░░      \n"
                "░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒████████████████████████████████████████████▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░░░\n"
                "░░░░░░░░░░░░░░░░░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░\n"
                "  ░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                "    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░    \n"
                "                                          ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░                          \n"
                << std::endl;
    outfile.close();
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &r_inst){
    (*this) = r_inst;
};

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &r_inst){
    this->setName(r_inst.getName());
    this->setSignature(r_inst.getSignature());
    this->setWho_could_sign(r_inst.getWho_could_sign());
    this->setWho_should_execute(r_inst.getWho_should_execute());
    return (*this);
};

ShrubberyCreationForm::~ShrubberyCreationForm(){
};
