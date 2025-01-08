/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:49:53 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/08 14:32:52 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_H
#define HUMAN_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA{

	private	:
		std::string	name;
		Weapon&		weapon;
	
	public :
		void		attack( void );
					HumanA( std::string name, Weapon& weapon );
					~HumanA( void );
};


#endif
