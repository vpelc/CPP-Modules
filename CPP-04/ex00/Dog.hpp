/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:30:57 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 15:24:07 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

	public :
	
		void	makeSound( void ) const;
				Dog( void );
				Dog(const Dog& copy);
				~Dog( void );
				
		Dog		&operator=(Dog const &src);
};

#endif