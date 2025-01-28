/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:28:37 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/28 17:04:32 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include <iostream>

class AMateria
{
	protected : 
	
	
	public :
						AMateria(std::string const & type);
		
	std::string const 	&getType() const; //Returns the materia type
	virtual AMateria*	clone( void ) const = 0;
	virtual void 		use(ICharacter& target);
};

#endif