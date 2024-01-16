/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:00:38 by idouni            #+#    #+#             */
/*   Updated: 2023/12/21 13:32:03 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestAForm.hpp"

RobotomyRequestAForm::RobotomyRequestAForm():AForm("Wout", 72, 45){
    std::cout << "Makes some drilling noises" << std::endl;
    std::cout << this->getName() << " has been robotomized successfully 50\% of the time" << std::endl;
};

RobotomyRequestAForm::RobotomyRequestAForm(std::string &target):AForm(target, 72, 45){
    std::cout << "Makes some drilling noises" << std::endl;
    std::cout << this->getName() << " has been robotomized successfully 50\% of the time" << std::endl;
};

RobotomyRequestAForm::RobotomyRequestAForm(RobotomyRequestAForm const &r_inst){
};

RobotomyRequestAForm &RobotomyRequestAForm::operator=(RobotomyRequestAForm const &r_inst){
};

RobotomyRequestAForm::~RobotomyRequestAForm(){
};
