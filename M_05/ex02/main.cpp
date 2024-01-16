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
    // ShrubberyCreationForm form(str);

    // std::cout << form.getName() << std::endl;

    Bureaucrat him("omar", 140);

    RobotomyRequestForm robot(str);
    RobotomyRequestForm robot1(str);
    RobotomyRequestForm robot2(str);
    RobotomyRequestForm robot3(str);


    him.signForm(robot3);
    him.executeForm(robot3);
    // std::cout << robot.getName() << std::endl;

    
    return 0;
}
