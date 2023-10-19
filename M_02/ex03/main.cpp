#include "Point.hpp"
#include "Fixed.hpp"

int main( void ) {
// bsp( Point const a, Point const b, Point const c, Point const point);
    // bsp( Point(2, 1), Point(4, 3), Point(4, 1), Point(3.2, 1.2));
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 4);
    Point point1(1, 1);
    Point point2(3, 2);
    Point point3(2, 1);
    Point point4(3, 4);
    Point point5(1, 3);

    std::cout << "Point 1 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point1) << std::endl;
    std::cout << "Point 2 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point2) << std::endl;
    std::cout << "Point 3 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point3) << std::endl;
    std::cout << "Point 4 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point4) << std::endl;
    std::cout << "Point 5 is inside the triangle: " << std::boolalpha << bsp(a, b, c, point5) << std::endl;

    return 0;
}