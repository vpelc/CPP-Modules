/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:24:35 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/16 15:16:16 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{	
	private :
	
		std::string		name;

	public :
	
						DiamondTrap( std::string name );
						DiamondTrap( void );
						DiamondTrap(const DiamondTrap& copy); 
						~DiamondTrap(  void );
		void			attack( const std::string& target );
		void			whoAmI( void );

		DiamondTrap		&operator=(DiamondTrap const &src);

};	

#endif