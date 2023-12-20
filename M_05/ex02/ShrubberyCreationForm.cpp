/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:54:47 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 18:53:37 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Wout", 145, 137){
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target):AForm(target, 145, 137){
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &r_inst){
};

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &r_inst){
};

ShrubberyCreationForm::~ShrubberyCreationForm(){
};
