/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:36:39 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/28 14:56:46 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("undifined") { std::cout << "An animal is born" << std::endl; }

Animal::Animal( Animal const &copy )
{
	std::cout << "An animal was cloned" << std::endl;
	*this = copy;
}

Animal::~Animal( void ) { std::cout << "An animal is dead" << std::endl; }

Animal &Animal::operator=(Animal const &src)
{
	std::cout << "An animal has a twin" << std::endl;
	this->type = src.getType();
	return *this;
}

void Animal::makeSound( void ) const { std::cout << "Weird silence..." << std::endl;}

// Getter
std::string Animal::getType( void ) const { return this->type;}

// Setter
void Animal::setType( std::string type) { this->type = type;}