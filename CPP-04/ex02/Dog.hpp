/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:30:57 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/28 14:34:23 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private :
	
		Brain	*brain;

	public :
	
		void	makeSound( void ) const;
				Dog( void );
				Dog(const Dog& copy);
				~Dog( void );
				
		Dog		&operator=(Dog const &src);
		
		Brain	&getBrain( void ) const;
		void	setBrain( Brain &brain );
};

#endif