/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedfl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:25 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 17:42:35 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_
#define __HEADER_

#include <iostream>
#include <fstream>
#include <string>

void exit_err(std::string err_msg);
void __init(int argc, char *argv[]);
void do_what_sed_does(std::ifstream &infile, std::ofstream &outfile, \
std::string &line, std::string &needle, std::string &tobe_add);

#endif