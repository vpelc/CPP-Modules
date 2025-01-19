/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:52:50 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/14 16:29:25 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap Jack("Jack");
	ClapTrap Josh("Josh");
	ScavTrap Jobot("Jobot");

	Jobot.guardGate();
	
	Jack.attack("Josh");
	Josh.takeDamage(Jack.getAttackDamage());

	Josh.setAttackDamage(1);
	Josh.attack("Jack");
	Jack.takeDamage(Josh.getAttackDamage());

	Jobot.attack("Josh");
	Josh.takeDamage(Jobot.getAttackDamage());
	
	Josh.beRepaired(Josh.getAttackDamage());

}