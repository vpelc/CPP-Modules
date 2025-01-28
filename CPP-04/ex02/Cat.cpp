/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:49:10 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/28 15:11:28 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";	
	this->brain = new Brain();
	std::cout << "It\'s a cat." << std::endl;
}

Cat::Cat( Cat const &copy ) : Animal(copy)
{
	this->brain = new Brain(*copy.brain);
	std::cout << "It\'s a cat." << std::endl;
}

Cat::~Cat( void )
{
	delete this->brain;
	std::cout << "It\'s a cat." << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	Animal::operator=(src);
	*this->brain = *src.brain;
	return *this;
}

void Cat::makeSound( void ) const { std::cout << "Miaow Miaow!" << std::endl;}


// Getter
Brain &Cat::getBrain( void ) const { return *this->brain; }

// Setter
void Cat::setBrain( Brain &brain) { *this->brain = brain; } 