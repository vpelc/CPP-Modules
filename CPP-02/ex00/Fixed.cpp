/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:37:03 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/10 16:30:10 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bitNbr = 8;

/*
	Constructor initializes fixed-point to 0
*/
Fixed::Fixed( void )
{
	this->fixNbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

/*
	Constructor takes a constant reference of a object Fixed(copy)
	And makes the calling pointer to point to this reference
*/
Fixed::Fixed( const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

/*
	Destructor
*/
Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;	
}

/*
	Changes the behavior of the = operator so that if it is called
	and the calling object(this) isn't the object in parameter(src)
	it gets the fixed-point value stored in src and stores in this
*/
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixNbr = src.getRawBits();
	return *this;
}

// Getter
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixNbr;
}

// Setter
void Fixed::setRawBits( int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixNbr = raw;
}
