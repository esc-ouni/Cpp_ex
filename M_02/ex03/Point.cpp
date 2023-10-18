#include "Point.hpp"

Point::Point(void):x(0), y(0){
};

Point::Point(const float x, const float y):x(x), y(y){
};

Point::Point(Point const &r_inst):x(r_inst.x), y(r_inst.y){
};

Point &Point::operator=(Point const &r_inst){
    *this = r_inst;
    return (*this);
};

Point::~Point(void){
    std::cout << "Destructor Called" << std::endl;
};

float	Point::g_x(void) const{
	return (this->x.toFloat());
};
float	Point::g_y(void) const{
	return (this->y.toFloat());
};