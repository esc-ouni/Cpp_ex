/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:18 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 11:52:35 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main( void ) {
    Point a(0, 0);
    Point b(4, 0);
    Point c(4, 4);
    Point point1(1, 1);
    Point point2(3, 2);
    Point point3(2, 1);
    Point point4(3, 4);
    Point point5(1, 3);
    Point point6(2, 0);
    Point point7(4, 2);
    Point point8(4, 4);

    std::cout << "Point 1 in : " << std::boolalpha << bsp(a, b, c, point1) << std::endl;
    std::cout << "Point 2 in : " << std::boolalpha << bsp(a, b, c, point2) << std::endl;
    std::cout << "Point 3 in : " << std::boolalpha << bsp(a, b, c, point3) << std::endl;
    std::cout << "Point 4 in : " << std::boolalpha << bsp(a, b, c, point4) << std::endl;
    std::cout << "Point 5 in : " << std::boolalpha << bsp(a, b, c, point5) << std::endl;
    std::cout << "Point 6 in : " << std::boolalpha << bsp(a, b, c, point6) << std::endl;
    std::cout << "Point 7 in : " << std::boolalpha << bsp(a, b, c, point7) << std::endl;
    std::cout << "Point 8 in : " << std::boolalpha << bsp(a, b, c, point8) << std::endl;

    // std::cout << bsp(a, b, c, point1) << std::endl;
    // std::cout << bsp(a, b, c, point2) << std::endl;
    // std::cout << bsp(a, b, c, point3) << std::endl;
    // std::cout << bsp(a, b, c, point4) << std::endl;
    // std::cout << bsp(a, b, c, point5) << std::endl;

    return 0;
}