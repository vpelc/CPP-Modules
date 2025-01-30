/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:00:13 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 14:15:21 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA( void ) : name("Kim"), weapon()
// {
// 	Weapon dft = Weapon("bare hands");
// 	this->weapon = dft;
// }

HumanA::HumanA( std::string name, Weapon &weapon )
		: name(name), weapon(weapon){}

HumanA::~HumanA( void ){}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their "
		<< this->weapon.getType() << std::endl; 
}

// Getter
Weapon &HumanA::getWeapon( void ) { return this->weapon; }

// Setter
void HumanA::setWeapon( Weapon &weapon) { this->weapon = weapon; }