/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:31:33 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/07 16:03:02 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie{
	
	private :
		std::string name;
	
	public :
		void announce( void );
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		Zombie( std::string name );
		~Zombie( void );
	
};

#endif