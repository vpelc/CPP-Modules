/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:52:27 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/16 17:03:33 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->name = "Garry";
	this->hitPoints = 100;
	this->energyPoints = 100; 
	this->attackDamage = 30;
	std::cout << this->name << "\'s traping journey begins!" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap::ClapTrap(name)
{
	// this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100; 
	this->attackDamage = 30;
	std::cout << this->name << "\'s traping journey begins!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	// std::cout << this->name << "is stealing " << copy.name << "\'s identity." << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << this->name << "\'s fraging ends with " << this->hitPoints << " HP, "
		<< this->energyPoints << " EP and " << this->attackDamage << " AD." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	ClapTrap::operator=(src);
	return *this;
}

void FragTrap::highFivesGuys( void )
{
	std::string c;
	
	std::cout << this->name << " wants a to high five! Do you want to?(Y/n)" << std::endl;
	while (1)
	{
		getline(std::cin, c);
		if (c.compare("Y") == 0 || c.compare("y") == 0 || c.compare("\n") == 0)
		{
			std::cout << "Hell yeah! " << this->name << " is super happy!" << std::endl;
			break ;
		}
		else if (c.compare("n") == 0 || c.compare("N") == 0)
		{
			std::cout << "Really? " << this->name << " is mega sad!" << std::endl;
			break;
		}
		else
			std::cout << "What?" << std::endl;
	}
}