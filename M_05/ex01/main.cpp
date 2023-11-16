/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/11/16 12:34:43 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
    try {
        Form form1("Form1", 50, 25);
        Bureaucrat bureaucrat1("John", 45);
        Bureaucrat bureaucrat2("Jane", 55);
        Bureaucrat bureaucrat3("Mehdi", 150);
        Bureaucrat bureaucrat4("Mouad", 1);

        std::cout << form1 << std::endl;
        bureaucrat3.signForm(form1); // Should be successful
        bureaucrat1.signForm(form1); // Should be successful
        bureaucrat2.signForm(form1); // Should fail
        bureaucrat4.signForm(form1); // Should fail
        

        std::cout << form1 << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Form form2("Form2", 0, 25); // Should throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // ... Additional tests for other scenarios ...
    
    return 0;
}
