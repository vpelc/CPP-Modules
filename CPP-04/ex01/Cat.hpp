/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:44:30 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/19 14:26:07 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private :
	
		Brain	*brain;

	public :

		void	makeSound( void ) const;
				Cat( void );
				Cat(const Cat& copy);
				~Cat( void );
				
		Cat		&operator=(Cat const &src);
	
		Brain	&getBrain( void ) const;
		void	setBrain( Brain brain );
};

#endif