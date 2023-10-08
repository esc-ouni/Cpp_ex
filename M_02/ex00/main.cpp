#include "Fixed.hpp"

int main( void ) {
    int a = 5, b = 18, c = 4, d = 2, r = 0;
    // Fixed a;
    // Fixed b( a );
    // Fixed c;
    
    // c = b;

    // std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    // std::cout << c.getRawBits() << std::endl;

    // r = a = b = c = d = a = b;

    r =(a=(b=(c=(d=(a=(b))))));
    std::cout << r << std::endl;
    return 0;
}
