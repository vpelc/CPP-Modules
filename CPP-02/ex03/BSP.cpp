/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:35:26 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/15 17:09:32 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSP.hpp"

/* Vector multiplication 2D : (B - A) × (P - A) */
float cross(Point const A, Point const B, Point const P)
{
    float x1y2;
    float x2y1;

    x1y2 = (B.getX().toFloat() - A.getX().toFloat()) * (P.getY().toFloat() - A.getY().toFloat());
    x2y1 = (B.getY().toFloat() - A.getY().toFloat()) * (P.getX().toFloat() - A.getX().toFloat());
    return ( x1y2 - x2y1 );
}

/* Tests if the point is in the triangle with cross multiplication */
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float cross1 = cross(a, b, point);
    float cross2 = cross(b, c, point);
    float cross3 = cross(c, a, point);

    bool i = (cross1 >= 0 && cross2 >= 0 && cross3 >= 0);
    bool j = (cross1 <= 0 && cross2 <= 0 && cross3 <= 0);
    
    return i || j;
}