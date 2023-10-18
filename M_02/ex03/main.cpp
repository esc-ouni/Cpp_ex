#include "Point.hpp"
#include "Fixed.hpp"

int main( void ) {
    Point point;

    std::cout << point.g_x() << std::endl;
    std::cout << point.g_x() << std::endl;

// bsp( Point const a, Point const b, Point const c, Point const point);
    bsp( Point(2, 1), Point(4, 3), Point(4, 1), Point(3.5, 1.5));
    return 0;
}