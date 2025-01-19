/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:09:09 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/16 17:03:37 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->name = "Graham";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << this->name << "\'s scaving journey begins!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	// this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << this->name << "\'s scaving journey begins!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	// std::cout << this->name << "is stealing " << copy.name << "\'s identity." << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << this->name << "\'s scaving ends with " << this->hitPoints << " HP, "
		<< this->energyPoints << " EP and " << this->attackDamage << " AD." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	ClapTrap::operator=(src);
	return *this;
}

void ScavTrap::guardGate( void )
{
	std::cout << this->name << " is now in Gate keeper mode." << std::endl;
}