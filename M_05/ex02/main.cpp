/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 15:00:36 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


int main() {
    try {
        AForm form1("Form1", 50, 25);
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
        AForm form2("Form2", 0, 25); // Should throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // ... Additional tests for other scenarios ...

    try {
        // Testing form creation
        AForm formLow("LowForm", 150, 150);
        AForm formHigh("HighForm", 1, 1);
        AForm formBoundary("BoundaryForm", 1, 150);
        Bureaucrat bureaucratBoundary("BoundaryBureaucrat", 150);
        Bureaucrat middleBureaucrat("MiddleBureaucrat", 75);
        AForm formMiddle("MiddleForm", 74, 74);

        // Testing bureaucrat creation
        Bureaucrat lowBureaucrat("LowBureaucrat", 150);
        Bureaucrat highBureaucrat("HighBureaucrat", 1);
        std::cout << lowBureaucrat << std::endl;
        std::cout << highBureaucrat << std::endl;
        std::cout << middleBureaucrat << std::endl;
        std::cout << bureaucratBoundary << std::endl; 

        std::cout << formMiddle << std::endl;
        std::cout << formBoundary << std::endl;
        std::cout << formLow << std::endl;
        std::cout << formHigh << std::endl;
        std::cout << formMiddle << std::endl;
        

        // Signing tests
        lowBureaucrat.signForm(formLow); // Should succeed
        highBureaucrat.signForm(formHigh); // Should succeed

        middleBureaucrat.signForm(formMiddle); // Should fail

        // Test boundary conditions
        bureaucratBoundary.signForm(formBoundary); // Should fail

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        AForm invalidForm("Invalid", 0, 151); // Should throw an exception
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // ... Additional tests for other scenarios ...
    
    
    return 0;
}
