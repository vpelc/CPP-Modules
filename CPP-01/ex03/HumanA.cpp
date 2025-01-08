/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:00:13 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/08 14:34:25 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
		: name(name), weapon(weapon){}

HumanA::~HumanA( void ){}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their "
		<< this->weapon.getType() << std::endl; 
}