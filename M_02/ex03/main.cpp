/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:18 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 11:48:25 by idouni           ###   ########.fr       */
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

    std::cout << "Point 1 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point1) << std::endl;
    std::cout << "Point 2 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point2) << std::endl;
    std::cout << "Point 3 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point3) << std::endl;
    std::cout << "Point 4 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point4) << std::endl;
    std::cout << "Point 5 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point5) << std::endl;
    std::cout << "Point 6 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point6) << std::endl;
    std::cout << "Point 7 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point7) << std::endl;

    // std::cout << bsp(a, b, c, point1) << std::endl;
    // std::cout << bsp(a, b, c, point2) << std::endl;
    // std::cout << bsp(a, b, c, point3) << std::endl;
    // std::cout << bsp(a, b, c, point4) << std::endl;
    // std::cout << bsp(a, b, c, point5) << std::endl;

    return 0;
}