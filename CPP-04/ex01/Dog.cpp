/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:55:45 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 15:12:25 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{ 
	this->type = "Dog";
	std::cout << "It\'s a dog." << std::endl; 
}

Dog::Dog( Dog const &copy ) : Animal(copy) { std::cout << "It\'s a dog." << std::endl; }

Dog::~Dog( void ) { std::cout << "It\'s a dog." << std::endl; }

Dog &Dog::operator=(Dog const &src)
{
	Animal::operator=(src);
	return *this;
}

void Dog::makeSound( void ) const { std::cout << "Waf Waf!" << std::endl;}
