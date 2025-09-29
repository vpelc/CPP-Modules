/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:48:34 by vpelc             #+#    #+#             */
/*   Updated: 2025/09/25 21:20:48 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

	public :

					FragTrap( std::string name);
					FragTrap( void );
					FragTrap( const FragTrap& copy);
					~FragTrap( void );

		FragTrap	&operator=(FragTrap const &src);
				
		void		highFivesGuys( void );
};


#endif