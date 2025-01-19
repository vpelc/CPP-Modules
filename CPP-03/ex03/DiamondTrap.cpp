/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:42:24 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/16 15:43:25 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	this->name = "Guy";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << this->name << "\'s diamonding journey begins!" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
{
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << this->name << "\'s diamonding journey begins!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << this->name << "is stealing " << copy.name << "\'s identity." << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << this->name << "\'s diamonding ends with " << this->getHitPoints() << " HP, "
		<< this->getEnergyPoints() << " EP and " << this->getAttackDamage() << " AD." << std::endl;	
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
	ScavTrap::operator=(src);
	return *this;
}

void DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);	
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I know my name is " << this->name << ". But they call me " << ClapTrap::name
		<< ". So who am I?" << std::endl;
}

