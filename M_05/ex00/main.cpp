/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:24:54 by idouni            #+#    #+#             */
/*   Updated: 2023/11/15 10:37:22 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

    try{
        Bureaucrat biro9rati("oustad", 159);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    catch(char const *err_msg){
        std::cout << err_msg << std::endl;
    }
    catch(...){
        std::cout << "Ambigous exception caught !" << std::endl;
    }
    std::cout << "so the program didn't end there !" << std::endl;
    return (0);
}