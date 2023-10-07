#ifndef __HEAD_HPP_
#define __HEAD_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>


class Fixed
{
    private:
    public:
        Fixed(void);
        Fixed(Fixed &other);
        Fixed operator=(Fixed &other);
        ~Fixed(void);
};

#endif