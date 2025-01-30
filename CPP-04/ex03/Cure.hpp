/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:34:48 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 17:10:52 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private : 
	
		std::string			type;
		
	public :
							Cure( void );					
							Cure(std::string const &type);
							Cure( Cure const &copy);
							~Cure( void );

		Cure				&operator=( Cure const &src);
		
		Cure*				clone( void ) const;
		void 				use(ICharacter& target);
		
		std::string const 	&getType() const; //Returns the materia type
};


#endif