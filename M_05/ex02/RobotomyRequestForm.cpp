/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:00:38 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 18:53:19 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("Wout", 72, 45){
};

RobotomyRequestForm::RobotomyRequestForm(std::string &target):AForm(target, 72, 45){
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &r_inst){
};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &r_inst){
};

RobotomyRequestForm::~RobotomyRequestForm(){
};
