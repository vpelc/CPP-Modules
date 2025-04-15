/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:51:02 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/15 20:59:14 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "BSP.hpp"

void is_point_inside(const Point &A, const Point &B, const Point &C, const Point &Point)
{
	if (bsp(A, B, C, Point))
		std::cout << "Point is inside the triangle: True" << std::endl;
	else
		std::cout << "Point is inside the triangle: False" << std::endl;
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	Point x;
	Point y((0), (3));
	Point z((3), (0));
	Point p((1), (1));
	
	is_point_inside(x, y, z, p);

	return 0;
}