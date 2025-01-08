/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:04:26 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/08 14:36:07 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name){}

HumanB::~HumanB( void ){}

void HumanB::attack( void )
{
	std::cout << this->name << " attacks with their "
		<< this->weapon->getType() << std::endl; 
}

void HumanB::setWeapon( Weapon &weapon)
{
	this->weapon = &weapon;
}