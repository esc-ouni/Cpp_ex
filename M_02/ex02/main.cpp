#include "Fixed.hpp"

int main( void ) {
    Fixed a(5.4f);
    Fixed b(57);

    if (b > a){
        std::cout << "b > a" << std::endl;
        return (0);
    }
    else
        std::cout << "b < a" << std::endl;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    // return 0;

    // int a = 16, b = 2, c = 2, d = 1, r = 0;

    // r = a / b / c / d;
    // std::cout << "Value of a : " << a << std::endl;
    // std::cout << "Value of b : " << b << std::endl;
    // std::cout << "Value of c : " << c << std::endl;
    // std::cout << "Value of d : " << d << std::endl;
    // std::cout << "Value of r : " << r << std::endl;
    // return 0;
}