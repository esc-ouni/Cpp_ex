/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:33 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 11:17:34 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):x(0), y(0){
};

Point::Point(const float x, const float y):x(x), y(y){
};

Point::Point(Point const &r_inst):x(r_inst.x), y(r_inst.y){
};

Point &Point::operator=(Point const &r_inst){
    if (this != &r_inst){
        const_cast<Fixed&>(x) = r_inst.x;
        const_cast<Fixed&>(y) = r_inst.y;
    }
    return (*this);
};

Point::~Point(void){
    // std::cout << "Destructor Called" << std::endl;
};

float	Point::g_x(void) const{
	return (this->x.toFloat());
};
float	Point::g_y(void) const{
	return (this->y.toFloat());
};