/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:28:37 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 17:53:46 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected : 
	
		std::string			type;
		
	public :
							AMateria( void );					
							AMateria(std::string const &type);
							AMateria( AMateria const &copy);
							~AMateria( void );
		
		virtual AMateria*	clone( void ) const = 0;
		virtual void 		use(ICharacter& target);
		
		std::string const 	&getType() const; //Returns the materia type
};

#endif