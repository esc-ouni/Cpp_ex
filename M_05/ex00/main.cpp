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
    for (int i = 0; i < 160; i++){
        try{
            Bureaucrat employee("oustad", i);
            std::cout << employee << "  ";
            std::cout << "decrementing Bureaucrat's grade to : " ;
            employee.decrementGrade();
            std::cout << employee.getGrade() << std::endl;

        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        catch(...){
            std::cout << "Ambigous exception caught !" << std::endl;
        }   
    }
    for (int i = 160; i >= 0; i--){
        try{
            Bureaucrat employee("oustad", i);
            std::cout << employee << " ";
            std::cout << "incrementing Bureaucrat's grade to : " ;
            employee.incrementGrade();
            std::cout << employee.getGrade() << std::endl;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        catch(...){
            std::cout << "Ambigous exception caught !" << std::endl;
        }   
    }
    return (0);
}
