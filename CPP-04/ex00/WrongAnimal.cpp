/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:19:33 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 17:28:22 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("undifined") { std::cout << "An wrong animal is born" << std::endl; }

WrongAnimal::WrongAnimal( WrongAnimal const &copy )
{
	std::cout << "An wrong animal was cloned" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal( void ) { std::cout << "An wrong animal is dead" << std::endl; }

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "An wrong animal has a twin" << std::endl;
	this->type = src.getType();
	return *this;
}

void WrongAnimal::makeSound( void ) const { std::cout << "Weird silence...But different" << std::endl;}

// Getter
std::string WrongAnimal::getType( void ) const { return this->type;}

// Setter
void WrongAnimal::setType( std::string type) { this->type = type;}