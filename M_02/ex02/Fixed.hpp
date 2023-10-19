/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:48 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 11:17:49 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

        Fixed  &operator++(void);
        Fixed  operator++(int);

        Fixed& operator--(void);
        Fixed  operator--(int);

        static Fixed &min(Fixed &l_inst, Fixed &r_inst);
        static const Fixed &min(Fixed const &l_inst, Fixed const &r_inst);
        static Fixed &max(Fixed &l_inst, Fixed &r_inst);
        static const Fixed &max(Fixed const &l_inst, Fixed const &r_inst);

        int   getRawBits(void) const;
        void  setRawBits(int const raw);
        float toFloat( void ) const;
        int   toInt( void ) const;

        ~Fixed(void);
};

std::ostream &operator<<(std::ostream &cout, Fixed const &r_inst);

#endif