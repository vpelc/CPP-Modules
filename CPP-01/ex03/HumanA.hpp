/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:49:53 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 14:15:36 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA{

	private	:
	
		std::string	name;
		Weapon&		weapon;
	
	public :
	
					// HumanA( void );
					HumanA( std::string name, Weapon& weapon );
					~HumanA( void );
		void		attack( void );

		Weapon		&getWeapon( void );
		void		setWeapon( Weapon &weapon);
};


#endif
