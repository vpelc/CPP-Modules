/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:40:45 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/08 13:52:56 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->type = type;
}

Weapon::~Weapon( void ){}

const std::string& Weapon::getType( void ) const
{
	const std::string& ref = this->type;
	return ref;
}

void Weapon::setType( std::string newtype)
{
	this->type = newtype;
}