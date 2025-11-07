/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:37:03 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/17 13:47:00 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bitNbr = 8;

/*
	Constructor initializes fixed-point to 0
*/
Fixed::Fixed( void ) : fixNbr(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

/*
	Constructor takes a constant reference of a object Fixed(copy)
	And makes the calling pointer to point to this reference
*/
Fixed::Fixed( const Fixed& copy) : fixNbr(copy.fixNbr)
{
	// std::cout << "Copy constructor called" << std::endl;
}

/*
	Constructor takes a constant int shifts by the number of 
	fractional bits(bitNbr) and stores the result in the fixed-point(fixNbr)
*/
Fixed::Fixed( const int nbr)
{
	this->fixNbr = nbr << this->bitNbr;
	// std::cout << "Int constructor called" << std::endl;
}

/*
	Constructor takes a constant float shifts by the number of 
	fractional bits(bitNbr) and stores the result in the fixed-point(fixNbr)
*/
Fixed::Fixed( const float nbr)
{
	this->fixNbr = roundf(nbr * (1 << this->bitNbr));
	// std::cout << "Float constructor called" << std::endl;
}

/*
	Destructor
*/
Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;	
}

/*
	Changes the behavior of the = operator so that if it is called
	and the calling object(this) isn't the object in parameter(src)
	it gets the fixed-point value stored in src and stores in this
*/
Fixed &Fixed::operator=(const Fixed &src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixNbr = src.getRawBits();
	return *this;
}

bool Fixed::operator<(Fixed src) const
{
	return this->fixNbr < src.fixNbr;
}

bool Fixed::operator>(Fixed src) const
{
	return this->fixNbr > src.fixNbr;
}

bool Fixed::operator<=(Fixed src) const
{
	return this->fixNbr <= src.fixNbr;
}

bool Fixed::operator>=(Fixed src) const
{
	return this->fixNbr >= src.fixNbr;
}

bool Fixed::operator==(Fixed src) const
{
	return this->fixNbr == src.fixNbr;
}

bool Fixed::operator!=(Fixed src) const
{
	return this->fixNbr != src.fixNbr;
}

float Fixed::operator+(Fixed src) const
{
	return this->toFloat() + src.toFloat();	
}

float Fixed::operator-(Fixed src) const
{
	return this->toFloat() - src.toFloat();	
}

float Fixed::operator*(Fixed src) const
{
	return this->toFloat() * src.toFloat();	
}

float Fixed::operator/(Fixed src) const
{
	return this->toFloat() / src.toFloat();	
}

Fixed Fixed::operator++()
{
	this->fixNbr++;
	return *this;
}

Fixed Fixed::operator--()
{
	this->fixNbr--;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed tmp = *this;
	++this->fixNbr;
	return tmp;
}

Fixed Fixed::operator--( int )
{
	Fixed tmp = *this;
	--this->fixNbr;
	return tmp;
}

/*
	Shifts the object's fixed-point and returns it as a float 
*/
float Fixed::toFloat( void ) const
{
	return (float)this->fixNbr / (float)(1 << this->bitNbr);
}

/*
	Shifts the object's fixed-point and returns it
*/
int  Fixed::toInt( void ) const
{
	return this->fixNbr >> this->bitNbr;
}

// Getter
int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->fixNbr;
}

// Setter
void Fixed::setRawBits( int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixNbr = raw;
}

Fixed &Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1.toFloat() <= nbr2.toFloat())
		return nbr1;
	else
		return nbr2;
}

const Fixed &Fixed::min(const Fixed &nbr1, const Fixed &nbr2)
{
	if (nbr1.toFloat() <= nbr2.toFloat())
		return nbr1;
	else
		return nbr2;
}

Fixed &Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1.toFloat() <= nbr2.toFloat())
		return nbr2;
	else
		return nbr1;
}

const Fixed &Fixed::max(const Fixed &nbr1, const Fixed &nbr2)
{
	if (nbr1.toFloat() <= nbr2.toFloat())
		return nbr2;
	else
		return nbr1;
}

/*
	Changes the behavior of the << operator when a Fixed
	objects in converted as output
*/
std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}
