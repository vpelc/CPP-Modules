/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:34:01 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/08 15:15:17 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon{

	private :
		std::string type;
	
	public :
		const std::string&	getType( void ) const;
		void			setType (std::string newtype);
						Weapon( std::string type );
						~Weapon( void );
};


#endif