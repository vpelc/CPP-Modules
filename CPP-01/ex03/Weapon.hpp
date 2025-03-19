/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:34:01 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 13:27:06 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{

	private :
	
		std::string type;
	
	public :

							Weapon( void ); 
							Weapon( std::string type );
							~Weapon( void );
		
		std::string const	getType( void ) const;
		void				setType (std::string newtype);
		
};


#endif