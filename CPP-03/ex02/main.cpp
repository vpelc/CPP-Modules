/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:52:50 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/14 17:11:52 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap Josh("Josh");
	ScavTrap Jobot("Jobot");
	FragTrap Jay("Jay");

	Jobot.guardGate();
	
	Josh.setAttackDamage(1);
	Josh.attack("Jobot");
	Jobot.takeDamage(Josh.getAttackDamage());

	Jobot.attack("Josh");
	Josh.takeDamage(Jobot.getAttackDamage());
	
	Josh.beRepaired(Josh.getAttackDamage());
	
	Jay.attack("Jobot");
	Jobot.takeDamage(Jay.getAttackDamage());
	
	Jay.highFivesGuys();
}