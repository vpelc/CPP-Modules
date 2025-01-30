/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:11:06 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 17:25:29 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {}

Cure::Cure( std::string const &type) : type(type) {}

Cure::Cure( Cure const &copy) : type(copy.getType()) {}

Cure::~Cure( void ) {}

Cure &Cure::operator=( Cure const &copy)
{
	// this->type = copy.getType();
	return *this;
}

void	Cure::use( ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}

Cure *Cure::clone( void ) const
{
	Cure *newCure = new Cure(this->getType());
	return newCure;
}

// Getter
std::string const &Cure::getType( void ) const { return this->type; }