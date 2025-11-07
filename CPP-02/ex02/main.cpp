/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:51:02 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/17 13:59:44 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "pre increment" << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "post increment" << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "max between b and a is " << Fixed::max( a, b ) << std::endl;
	

	return 0;
}