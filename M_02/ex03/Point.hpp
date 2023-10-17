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

		Point &operator=(Point const &r_inst);

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif