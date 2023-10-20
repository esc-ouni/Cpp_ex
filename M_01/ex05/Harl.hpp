/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:37:53 by idouni            #+#    #+#             */
/*   Updated: 2023/10/20 17:44:44 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP_
#define __HARL_HPP_

#include <iostream>
#include <string>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void (Harl::*p[5])(void);
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

void    _err(std::string err_msg);
int     _check_level(std::string string);

#endif