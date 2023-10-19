/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:16:55 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 11:48:17 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
    float w1 = 0, w2 = 0;

    w1 = (float)((((a.g_x() * (c.g_y() - a.g_y())) + ((point.g_y() - a.g_y()) * (c.g_x() - a.g_x())) - (point.g_x() * (c.g_y() - a.g_y())))/\
    (((b.g_y() - a.g_y()) * (c.g_x() - a.g_x())) - ((b.g_x() - a.g_x()) * (c.g_y() - a.g_y())))));

    w2 = (float)(point.g_y() - a.g_y() - w1 * (b.g_y() - a.g_y()))/\
    (c.g_y() - a.g_y());

    // std::cout << "w1 : " << w1 << std::endl;
    // std::cout << "w2 : " << w2 << std::endl;
    if (w1 > 0 && w2 > 0 && (w1 + w2) < 1)
        return (true);
    else
        return (false);
}