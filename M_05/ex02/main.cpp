/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/12/21 12:33:15 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    std::string str = "form";

    Bureaucrat him("him", 15);
    Bureaucrat her("her", 120);
    RobotomyRequestForm robot(str);

    her.signForm(robot);
    him.signForm(robot);
    her.executeForm(robot);
    him.executeForm(robot);

    RobotomyRequestForm robot1(str);
    RobotomyRequestForm robot2(str);
    RobotomyRequestForm robot3(str);

    ;
    str = "Tree"; ShrubberyCreationForm Shrubbery(str);
    str = "slave"; PresidentialPardonForm PresidentialPardonForm(str);
    
    return 0;
}
