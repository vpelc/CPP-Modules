/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:55:01 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/09 21:48:52 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class Fixed{

	private :
		int					fixNbr;
		const static int	bitNbr;
	
	public :
				Fixed( void );
				Fixed( const Fixed& copy);
				~Fixed( void );
				Fixed &operator=(const Fixed &src);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};


#endif