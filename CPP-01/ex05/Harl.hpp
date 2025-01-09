/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:04:47 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/09 12:02:23 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>
#include <cstdlib>

# define BROKEN 1
# define TEAM 2
# define LAG 3

class Harl{

	private :
		
		static int	context;
		
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );
	
	public :
		void		complain( std::string level );
					Harl( void );
					~Harl( void );
	
};

#endif