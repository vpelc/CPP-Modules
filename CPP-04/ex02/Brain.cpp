/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:24:57 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 18:58:45 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {}

Brain::Brain( const Brain &copy)
{
	for (int i = 0; i < 100; i++);
	*this = copy;
}

Brain::~Brain( void ) {}

Brain	&Brain::operator=(const Brain &src)
{
	std::copy(src.ideas, src.ideas + 100, this->ideas);
	return *this;
}

// Getter
std::string Brain::getIdea( int index ) const { return this->ideas[index];}

// Setter
void Brain::setIdea( std::string idea, int index) { this->ideas[index] = idea;}