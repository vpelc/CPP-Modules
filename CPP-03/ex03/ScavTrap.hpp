/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:30:37 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/16 17:38:20 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{
	
	public :

					ScavTrap( std::string name);
					ScavTrap( void );
					ScavTrap( const ScavTrap& copy);
					~ScavTrap( void );
				
		ScavTrap	&operator=(ScavTrap const &src);
				
		void		guardGate( void ); 
};

#endif