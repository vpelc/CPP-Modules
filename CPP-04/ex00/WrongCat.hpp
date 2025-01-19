/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:26:19 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 17:30:22 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public :

		void		makeSound( void ) const;
					WrongCat( void );
					WrongCat(const WrongCat& copy);
					~WrongCat( void );
				
		WrongCat	&operator=(WrongCat const &src);
	
};

#endif