/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/11/15 10:39:14 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

    try{
        Bureaucrat employee("oustad", 159);
    }
    catch(char const *err_msg){
        std::cout << err_msg << std::endl;
    }
    catch(...){
        std::cout << "Ambigous exception caught !" << std::endl;
    }

    
    return (0);
}