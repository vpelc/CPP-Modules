/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:20:24 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 17:26:33 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {}

Ice::Ice( std::string const &type) : type(type) {}

Ice::Ice( Ice const &copy) : type(copy.getType()) {}

Ice::~Ice( void ) {}

Ice &Ice::operator=( Ice const &copy)
{
	// this->type = copy.getType();
	return *this;
}

void	Ice::use( ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice *Ice::clone( void ) const
{
	Ice *newIce = new Ice(this->getType());
	return newIce;
}

// Getter
std::string const &Ice::getType( void ) const { return this->type; }