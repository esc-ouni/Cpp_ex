#ifndef __HEAD_HPP_
#define __HEAD_HPP_

#define VALUE 42

static int i = 0;

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cmath>

class Fixed
{
    private:
        int              fixed_point;
        const static int num_fract_bits = 8;
    public:
        Fixed(void);
        Fixed(const int num_to_convert);
        Fixed(const float num_to_convert);
        Fixed(Fixed const &r_inst);

        Fixed  &operator=(Fixed const &r_inst);
        bool   operator>(Fixed const &r_inst);
        bool   operator<(Fixed const &r_inst);
        bool   operator>=(Fixed const &r_inst);
        bool   operator<=(Fixed const &r_inst);
        bool   operator==(Fixed const &r_inst);
        bool   operator!=(Fixed const &r_inst);
        Fixed  operator+(Fixed const &r_inst);
        Fixed  operator-(Fixed const &r_inst);
        Fixed  operator*(Fixed const &r_inst);
        Fixed  operator/(Fixed const &r_inst);

        // Fixed& operator++(void);     // Pre-increment
        // Fixed& operator--(void);     // Pre-decrement
        // Fixed  operator++(int);   // Post-increment
        // Fixed  operator--(int);   // Post-decrement

        int   getRawBits(void) const;
        void  setRawBits(int const raw);
        float toFloat( void ) const;
        int   toInt( void ) const;

        ~Fixed(void);
};

std::ostream &operator<<(std::ostream &cout, Fixed const &r_inst);

#endif