#include "Point.hpp"
#include "Fixed.hpp"

int main( void ) {
    // Point point;

    // std::cout << point.g_x() << std::endl;
    // std::cout << point.g_x() << std::endl;

// bsp( Point const a, Point const b, Point const c, Point const point);
    bsp( Point(2, 1), Point(4, 3), Point(4, 1), Point(3.5, 1.5));


    // Point a(1, 1);
    // Point b(2, 2);

    // a = b;

    // std::cout << "ax  : " << a.g_x() << std::endl;
    // std::cout << "ay  : " << a.g_y() << std::endl;
    // std::cout << "bx  : " << b.g_x() << std::endl;
    // std::cout << "by  : " << b.g_y() << std::endl;
    return 0;
}