/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:09:32 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/15 20:57:04 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Point.hpp"

Point::Point ( void ) : x((Fixed)0), y((Fixed)0) {}

Point::Point ( Fixed x, Fixed y) : x(x), y(y) {}

Point::Point (const Point& copy) : x(copy.x), y(copy.y){}

Point &Point::operator=(const Point &src)
{
	if (this != &src)
	{
		(Fixed) this->x = src.getX();
		(Fixed) this->y = src.getY();
	}
	return *this;
}

Point::~Point( void ) {}

// Getter
Fixed Point::getX( void ) const{ return this->x; }

Fixed Point::getY( void ) const{ return this->y; }

// Setter
void Point::setX(Fixed &x) {(Fixed) this->x = x;}

void Point::setY(Fixed &y) {(Fixed) this->y = y;}