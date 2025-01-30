/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:54:01 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 17:21:41 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {}

AMateria::AMateria( std::string const &type) : type(type) {}

AMateria::AMateria( AMateria const &copy) : type(copy.type) {}

AMateria::~AMateria( void ) {}

void	AMateria::use( ICharacter &target)
{
	std::cout << "* abstractly used on " << target.getName() << " *" << std::endl;
}

// Getter
std::string const &AMateria::getType( void ) const { return this->type; }