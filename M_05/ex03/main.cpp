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
#include "PresidentialPardonAForm.hpp"
#include "RobotomyRequestAForm.hpp"
#include "ShrubberyCreationAForm.hpp"


int main() {
    std::string str = "form";
    ShrubberyCreationAForm form(str);

    std::cout << form.getName() << std::endl;
    
    return 0;
}
