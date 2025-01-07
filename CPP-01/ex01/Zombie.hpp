/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:31:33 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/07 18:17:33 by vpelc            ###   ########.fr       */
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
		Zombie* zombieHorde( int N, std::string name );
		Zombie( void );
		~Zombie( void );
		void setName(std::string name);
	
};

#endif