/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:55:01 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/15 13:19:37 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class Fixed{

	private :
		int					fixNbr;
		const static int	bitNbr;
	
	public :
							Fixed( void );
							Fixed (const int nbr);
							Fixed (const float nbr);
							Fixed( const Fixed& copy);
							~Fixed( void );
							
		Fixed				&operator=(const Fixed &src);
		bool				operator<(Fixed src) const;
		bool				operator>(Fixed src) const;
		bool				operator<=(Fixed src) const;
		bool				operator>=(Fixed src) const;
		bool				operator==(Fixed src) const;
		bool				operator!=(Fixed src) const;
		float				operator+(Fixed src) const;
		float				operator-(Fixed src) const;
		float				operator*(Fixed src) const;
		float				operator/(Fixed src) const;
		Fixed				operator++( void );
		Fixed				operator--( void );
		Fixed				operator++( int );
		Fixed				operator--( int );
		
		int					getRawBits( void ) const;
		void				setRawBits( int const raw);
		
		float				toFloat( void ) const;
		int					toInt( void ) const;
		
		static Fixed		&min(Fixed &nbr1, Fixed &nbr2);
		static const Fixed	&min(const Fixed &nbr1, const Fixed &nbr2);
		static Fixed		&max(Fixed &nbr1, Fixed &nbr2);
		static const Fixed	&max(const Fixed &nbr1, const Fixed &nbr2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &src);


#endif