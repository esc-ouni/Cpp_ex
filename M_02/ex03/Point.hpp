/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:37 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 11:51:41 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP_
#define __POINT_HPP_

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
        Fixed const x;
        Fixed const y;
	public:
		Point(void);
        Point(const float x, const float y);
		Point(Point const &r_inst);
		~Point(void);

		float g_x(void) const;
		float g_y(void) const;

		Point &operator=(Point const &r_inst);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif