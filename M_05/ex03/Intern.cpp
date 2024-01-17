/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:33:15 by idouni            #+#    #+#             */
/*   Updated: 2024/01/05 19:33:16 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern(){
};

Intern::Intern(Intern const &r_inst){
    (*this) = r_inst;
};

Intern &Intern::operator=(Intern const &r_inst){
    (void)r_inst;
    return (*this);
};

Intern::~Intern(){
};

std::string arr[3] = {"ShrubberyCreationForm", 
                      "RobotomyRequestForm", 
                      "PresidentialPardonForm"};

AForm *Intern::makeAForm(std::string name, std::string target){
    for (int i = 0; i < 3; i++){
        if (arr[i] == name){
            try{
                return (new arr[i](target));
            }
            catch (...){
                return NULL;
            }
        }
    }
    std::cerr << "Invalid Form name !" << std::endl;
    return NULL;
};
