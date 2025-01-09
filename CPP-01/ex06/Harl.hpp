/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:04:47 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/09 13:21:03 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>
#include <cstdlib>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

# define BROKEN 4
# define TEAM 5
# define LAG 6

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