#include "Fixed.hpp"

template<typename T>
void printBits(T value) {
    union {
        T value;
        unsigned char bytes[sizeof(T)];
    } u;

    u.value = value;

    for (int i = sizeof(T) - 1; i >= 0; --i) {
        std::bitset<8> bits(u.bytes[i]);
        std::cout << bits;
    }
    std::cout << std::endl;
}

int main( void ) {
    float n = 3.14159;
    std::cout << "raw bits:" << std::endl;
    printBits(n);
    n *= 256;

    std::roundf(n);
    std::cout << "AFTER 1:" << std::endl;
    printBits(n);
    // std::cout << std::setprecision(10) << n << std::endl;

    n /= 256;
    // std::cout << std::setprecision(10) << n << std::endl;
    std::cout << "AFTER 2(back):" << std::endl;
    printBits(n);

    // Fixed a;
    // Fixed const b( 10 );
    // Fixed const c( 42.42f );
    // Fixed const d( b );

    // a = Fixed( 1234.4321f );
    
    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}