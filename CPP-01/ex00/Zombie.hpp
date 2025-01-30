/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:31:33 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 13:27:43 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	
	private :
	
		std::string		name;
	
	public :
						Zombie( std::string name );
						Zombie( void );
						~Zombie( void );
		void			announce( void );
		Zombie*			newZombie( std::string name );
		void			randomChump( std::string name );
	
};

#endif