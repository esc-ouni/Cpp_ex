/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:58 by idouni            #+#    #+#             */
/*   Updated: 2023/11/04 19:54:36 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;

    std::cout << ++a << std::endl;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;

    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;


    
    return 0;
}