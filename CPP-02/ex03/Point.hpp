/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:02:08 by vpelc             #+#    #+#             */
/*   Updated: 2025/04/15 13:35:49 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class Point{

	private :
		Fixed const 	x;
		Fixed const 	y;

	public :
						Point( void );
						Point( Fixed x, Fixed y);
						Point( const Point& copy);
						~Point( void );
						
		Point			&operator=(const Point &src);
		
		Fixed			getX( void ) const;
		Fixed			getY( void )const;
		void			setX( Fixed &x);
		void			setY( Fixed &y);
};


#endif