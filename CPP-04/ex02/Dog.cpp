/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:55:45 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/28 15:12:16 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{ 
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "It\'s a dog." << std::endl; 
}

Dog::Dog( Dog const &copy ) : Animal(copy) 
{
	this->brain = new Brain(*copy.brain);
	std::cout << "It\'s a dog." << std::endl;
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "It\'s a dog." << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	Animal::operator=(src);
	*this->brain = *src.brain;
	return *this;
}

void Dog::makeSound( void ) const { std::cout << "Waf Waf!" << std::endl;}


// Getter
Brain &Dog::getBrain( void ) const { return *this->brain; }

// Setter
void Dog::setBrain( Brain &brain) { *this->brain = brain; } 