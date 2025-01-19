/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:44:30 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 15:24:14 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	public :

		void	makeSound( void ) const;
				Cat( void );
				Cat(const Cat& copy);
				~Cat( void );
				
		Cat		&operator=(Cat const &src);
	
};

#endif