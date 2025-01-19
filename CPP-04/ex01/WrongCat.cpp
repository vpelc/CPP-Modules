/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:27:06 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 17:27:08 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";	
	std::cout << "It\'s not a cat." << std::endl;
}

WrongCat::WrongCat( WrongCat const &copy ) : WrongAnimal(copy) { std::cout << "It\'s not a cat." << std::endl; }

WrongCat::~WrongCat( void ) { std::cout << "It\'s not a cat." << std::endl; }

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	WrongAnimal::operator=(src);
	return *this;
}

void WrongCat::makeSound( void ) const { std::cout << "Not Miaow Not Miaow!" << std::endl;}