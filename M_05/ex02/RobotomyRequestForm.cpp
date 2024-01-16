/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:00:38 by idouni            #+#    #+#             */
/*   Updated: 2023/12/21 13:32:03 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

bool RobotomyRequestForm::var = true;

RobotomyRequestForm::RobotomyRequestForm():AForm("Wout", 72, 45){
    std::cout << "Makes some drilling noises" << std::endl;
    if (RobotomyRequestForm::var)
        std::cout << "Target has been robotomized successfully !" << std::endl, RobotomyRequestForm::var = false;
    else
        std::cout << "The robotomy has been failed !" << std::endl, RobotomyRequestForm::var = true;
};

RobotomyRequestForm::RobotomyRequestForm(std::string &target):AForm(target, 72, 45){
    std::cout << "Makes some drilling noises" << std::endl;
    if (RobotomyRequestForm::var)
        std::cout << target << " has been robotomized successfully !" << std::endl, RobotomyRequestForm::var = false;
    else
        std::cout << "The robotomy has been failed !" << std::endl, RobotomyRequestForm::var = true;
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &r_inst){
    (*this) = r_inst;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &r_inst){
    this->setName(r_inst.getName());
    this->setSignature(r_inst.getSignature());
    this->setWho_could_sign(r_inst.getWho_could_sign());
    this->setWho_should_execute(r_inst.getWho_should_execute());
    return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm(){
};
