/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:48:34 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/14 16:52:20 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAFTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

	public :

				FragTrap( std::string name);
				~FragTrap( void );
		void	highFivesGuys( void );
};


#endif