/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:33:18 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/14 16:32:19 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap{

	protected : 
		
		std::string		name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;

	public :

						ClapTrap(std::string name);
						~ClapTrap( void );
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				getHitPoints( void );
		int				getEnergyPoints( void );
		int				getAttackDamage( void );
		void			setHitPoints( unsigned int amount );
		void			setEnergyPoints( unsigned int amount );
		void			setAttackDamage( unsigned int amount );
	
};

#endif 