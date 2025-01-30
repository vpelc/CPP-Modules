/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:27:53 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 17:53:54 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private :
	
		std::string			name;
		AMateria*			inventory[4];
	
	public :
	
							Character( std::string );
							Character( Character const &copy);	
							~Character( void );
		
		Character			&operator=(Character const &src);
		
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		
		std::string const	&getName() const;
};

#endif