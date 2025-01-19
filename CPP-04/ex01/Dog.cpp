/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:55:45 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/19 14:26:15 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{ 
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "It\'s a dog." << std::endl; 
}

Dog::Dog( Dog const &copy ) : Animal(copy) { std::cout << "It\'s a dog." << std::endl; }

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "It\'s a dog." << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	Animal::operator=(src);
	return *this;
}

void Dog::makeSound( void ) const { std::cout << "Waf Waf!" << std::endl;}
