/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:38:35 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 13:13:03 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "Zerome";
	std::cout << name << ": comes back to life (sort of ...)" << std::endl;
}

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << name << ": comes back to life (sort of ...)" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << name << ": is dead for good (normally ...)" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}