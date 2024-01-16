/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/11/16 12:58:44 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
    try {
        Form       low_form("LowForm", 150, 150);
        Form       high_form("HighForm", 1, 1);
        Form       midd_form("MiddleForm", 75, 75);
        Bureaucrat low_Bureaucrat("LowBureaucrat", 150);
        Bureaucrat high_Bureaucrat("HighBureaucrat", 1);

        std::cout << low_Bureaucrat << std::endl;
        std::cout << high_Bureaucrat << std::endl;

        std::cout << low_form << std::endl;
        std::cout << high_form << std::endl;
        std::cout << midd_form << std::endl;

        high_Bureaucrat.signForm(low_form);  // Should succeed
        high_Bureaucrat.signForm(midd_form); // Should succeed
        high_Bureaucrat.signForm(high_form); // Should succeed
        
        low_Bureaucrat.signForm(low_form);  // Should succeed
        low_Bureaucrat.signForm(midd_form); // Should fail
        low_Bureaucrat.signForm(high_form); // Should fail
        
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
