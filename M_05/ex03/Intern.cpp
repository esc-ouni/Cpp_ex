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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm *createPresidentialPardon(const std::string& target) {
    return new PresidentialPardonForm(target);
};

AForm *createShrubberyCreation(const std::string& target) {
    return new ShrubberyCreationForm(target);
};

AForm *createRobotomyRequest(const std::string& target) {
    return new RobotomyRequestForm(target);
};

typedef struct iteem{
    std::string form;
    AForm       *(*ptr)(const std::string &target);
} Item;

Item arr[3] = {{"shrubbery creation", &createShrubberyCreation}, 
               {"robotomy request", &createRobotomyRequest}, 
               {"presidential pardon", &createPresidentialPardon}};



AForm *Intern::makeForm(const std::string &name, const std::string &target){
    for (int i = 0; i < 3; i++){
        if (arr[i].form == name){
            try{
                return arr[i].ptr(target);
            }
            catch (...){
                throw std::runtime_error("Bad Alloc !");
            }
        }
    }
    throw std::runtime_error("Invalid Form Name !");
    return NULL;
};

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
