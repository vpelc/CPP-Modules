/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:42:08 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 17:18:58 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal{
	
	protected :
	
		std::string		type;	
		
	public :
	
		virtual void	makeSound( void ) const;
						Animal( void );
						Animal(const Animal& copy);
		virtual			~Animal( void );
				
		Animal			&operator=(Animal const &src);

		std::string		getType( void ) const;
		void			setType( std::string type);
};

#endif