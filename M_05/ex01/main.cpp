/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/11/16 12:02:24 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    
    // Bureaucrat employee("oustad", 1);
    // std::cout << employee;
    // for (unsigned long long i = 0; i < 200; i++){
    //     try
    //     {
    //         employee.decrementGrade();
    //         std::cout << "Grade decremented successfully !. It becomes : " << employee.getGrade() << std::endl;
    //     }
    //     catch (std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    //     catch(...){
    //         std::cout << "Ambigous exception caught !" << std::endl;
    //     }
        
    // }
    
    Form m("hello", 15, 4);


    std::cout << "before : " << m.getSignature() << std::endl;
    Form m2(m);
    std::cout << "after  : " << m.getSignature() << std::endl;
    
    return (0);
}