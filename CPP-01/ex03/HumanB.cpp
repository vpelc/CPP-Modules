/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:04:26 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 14:15:28 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB( void ) : name("Ray") {}

HumanB::HumanB( std::string name ) : name(name), weapon(NULL){}

HumanB::~HumanB( void ){}

void HumanB::attack( void )
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon != NULL)
		std::cout << this->weapon->getType() << std::endl; 
	else
		std::cout << "... well... with nothing" << std::endl; 
}


// Getter
Weapon &HumanB::getWeapon( void ) { return *this->weapon; }

// Setter
void HumanB::setWeapon( Weapon &weapon) { this->weapon = &weapon; }