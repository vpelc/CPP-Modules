/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:25:16 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/28 15:21:34 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal{
	
	protected :
	
		std::string		type;
						Animal( void );
						Animal(const Animal& copy);
		
	public :
	
		virtual void	makeSound( void ) const;
		
		virtual			~Animal( void );
				
		Animal		&operator=(Animal const &src);

		std::string		getType( void ) const;
		void			setType( std::string type);
		virtual Brain	&getBrain( void ) const = 0 ; 
		
};

#endif