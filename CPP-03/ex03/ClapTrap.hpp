/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:33:18 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/16 16:35:11 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap{

	protected : 
		
		std::string		name;
		int				hitPoints;
		int				energyPoints;
		int				attackDamage;

	public :

							ClapTrap(std::string name);
							ClapTrap( void );
							ClapTrap(const ClapTrap& clap); 
							~ClapTrap( void );
		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		
		ClapTrap			&operator=(ClapTrap const &src);
		
		std::string	const	getName( void ) const;
		int					getHitPoints( void ) const;
		int					getEnergyPoints( void ) const;
		int					getAttackDamage( void )const;
		
		void				setName( std::string name );
		void				setHitPoints( unsigned int amount );
		void				setEnergyPoints( unsigned int amount );
		void				setAttackDamage( unsigned int amount );
	
};

#endif 