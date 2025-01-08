/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:55:29 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/08 14:35:56 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{

	private	:
		std::string	name;
		Weapon*		weapon;
	
	public :
		void		attack( void );
		void		setWeapon( Weapon &weapon);
					HumanB( std::string name );
					~HumanB( void );
};

#endif