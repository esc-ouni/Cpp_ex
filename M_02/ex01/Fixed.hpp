#ifndef __HEAD_HPP_
#define __HEAD_HPP_

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
        int              raw_bits;
    public:
        Fixed(void);
        Fixed(const int num_to_convert);
        Fixed(const float num_to_convert);
        Fixed(Fixed &r_inst);

        // Fixed &operator=(Fixed &r_inst);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;

        ~Fixed(void);
};

std::ostream &operator<<(std::ostream &COUT, Fixed &r_inst);

#endif