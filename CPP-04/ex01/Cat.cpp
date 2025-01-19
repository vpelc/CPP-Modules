/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:49:10 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 15:16:31 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";	
	std::cout << "It\'s a cat." << std::endl;
}

Cat::Cat( Cat const &copy ) : Animal(copy) { std::cout << "It\'s a cat." << std::endl; }

Cat::~Cat( void ) { std::cout << "It\'s a cat." << std::endl; }

Cat &Cat::operator=(Cat const &src)
{
	Animal::operator=(src);
	return *this;
}

void Cat::makeSound( void ) const { std::cout << "Miaow Miaow!" << std::endl;}
