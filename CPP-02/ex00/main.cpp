/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:51:02 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/22 13:30:36 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;
	
	std::cout << "a is " << a.getRawBits() << std::endl;
	std::cout << "b is " << b.getRawBits() << std::endl;
	std::cout << "c is " << c.getRawBits() << std::endl;
	
	return 0;
}