/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:39:06 by idouni            #+#    #+#             */
/*   Updated: 2023/10/20 17:44:33 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP_
#define __HARL_HPP_

#include <iostream>
#include <fstream>
#include <string>

#define DEBUG   1
#define INFO    2
#define WARNING 3
#define ERROR   4

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void confusion(void);
        void (Harl::*p[5])(void);
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

void    exit_err(std::string err_msg);
int     filter(std::string string);
void    __init(int argc, char *argv[]);

#endif