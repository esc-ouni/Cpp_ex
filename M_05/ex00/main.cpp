/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/11/15 10:50:46 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    
    Bureaucrat employee("oustad", 1);
    for (unsigned long long i = 0; i < 844674407370551; i++){
        try{
            employee.decrementGrade();
            std::cout << "Grade decremented successfully !" << employee.getGrade() << std::endl;
        }
        catch(char const *err_msg){
            std::cout << err_msg << std::endl;
        }
        catch(...){
            std::cout << "Ambigous exception caught !" << std::endl;
        }
        
    }
    
    return (0);
}