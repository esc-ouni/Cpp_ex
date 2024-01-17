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
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Intern someRandomIntern;
    AForm* rrf;

    try {
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        delete rrf;
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        delete rrf;
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        rrf = someRandomIntern.makeForm("invalid form", "Bender");
        delete rrf;
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
