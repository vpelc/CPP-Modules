/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:37:15 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 17:21:00 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private : 
	
		std::string			type;
		
	public :
							Ice( void );					
							Ice(std::string const &type);
							Ice( Ice const &copy);
							~Ice( void );

		Ice				&operator=( Ice const &src);
		
		Ice*				clone( void ) const;
		void 				use(ICharacter& target);
		
		std::string const 	&getType() const; //Returns the materia type
};


#endif