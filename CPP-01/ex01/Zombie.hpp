/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:31:33 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 13:27:37 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	
	private :
	
		std::string	name;
	
	public :
					Zombie( void );
					~Zombie( void );
		void		announce( void );
		Zombie*		zombieHorde( int N, std::string name );
		
		std::string	getName( void );
		void		setName(std::string name);
	
};

#endif