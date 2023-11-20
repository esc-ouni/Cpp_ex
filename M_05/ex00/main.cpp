/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/11/20 13:13:51 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    
    // std::cout << employee;
    // for (unsigned long long i = 0; i < 200; i++){
        try
        {
            Bureaucrat employee("oustad", 157);
            // employee.decrementGrade();
            // std::cout << "Grade decremented successfully !. It becomes : " << employee.getGrade() << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        // catch(...){
        //     std::cout << "Ambigous exception caught !" << std::endl;
        // }
        
    // }
    
    return (0);
}