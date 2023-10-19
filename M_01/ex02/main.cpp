/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:13:07 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 16:13:08 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << &string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl
    << std::endl;

    std::cout << string << std::endl;
    std::cout << *(stringPTR) << std::endl;
    std::cout << stringREF << std::endl;
    // std::system("leaks Newton");
}
