/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:55:29 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 14:15:32 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{

	private	:
	
		std::string	name;
		Weapon*		weapon;
	
	public :
	
					// HumanB( void );
					HumanB( std::string name );
					~HumanB( void );
		void		attack( void );
		
		Weapon		&getWeapon( void );
		void		setWeapon( Weapon &weapon);
};

#endif