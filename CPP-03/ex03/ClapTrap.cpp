/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:39:36 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/16 17:04:58 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	this->name = "George";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << this->name << "\'s clapping journey begins!" << std::endl;
}

ClapTrap::ClapTrap( std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << this->name << "\'s clapping journey begins!" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& copy)
{
	std::cout << this->name << "is stealing " << copy.name << "\'s identity." << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << this->name << "\'s clapping ends with " << this->hitPoints << " HP, "
		<< this->energyPoints << " EP and " << this->attackDamage << " AD." << std::endl;	
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << this->name << "is copying " << src.name << "\'s identity." << std::endl;
	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getAttackDamage();
	return *this;
}


void ClapTrap::attack(const std::string& name)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " has no HP left." << std::endl;
		return;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << this->name << " has no EP left." << std::endl;
		return;
	}
	std::cout << this->name << " claps "
		<< name << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << this->name << " takes " << amount << " damage and";
	if (this->hitPoints > 0)
		std::cout << " lives with " << this->hitPoints << " HP." << std::endl;
	else
		std::cout << " died, leaving him with " << this->hitPoints << " HP." << std::endl;
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " has no HP left." << std::endl;
		return;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << this->name << " has no EP left." << std::endl;
		return;
	}
	this->hitPoints += amount;
	this->energyPoints -= 1;
}



//Getter
std::string const ClapTrap::getName( void ) const { return this->name; }

int ClapTrap::getHitPoints( void ) const { return this->hitPoints;  }

int ClapTrap::getEnergyPoints( void ) const { return this->energyPoints;  }

int ClapTrap::getAttackDamage( void ) const { return this->attackDamage;  }

//Setter
void ClapTrap::setName( std::string name ){ this->name = name; }

void ClapTrap::setHitPoints( unsigned int amount ) { this->hitPoints = amount; }

void ClapTrap::setEnergyPoints( unsigned int amount ) { this->energyPoints = amount; }

void ClapTrap::setAttackDamage( unsigned int amount ) { this->attackDamage = amount; }
