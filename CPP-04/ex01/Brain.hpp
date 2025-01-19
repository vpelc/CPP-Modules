/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:01:21 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/19 14:08:41 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <string>
# include <iostream>

class Brain{

	private :

		std::string		ideas[100];

	public :

						Brain( void );
						Brain(const Brain& copy);
						~Brain( void );
						
		Brain			&operator=(Brain const &src);

		std::string		getIdea( int index ) const;
		void			setIdea( std::string idea, int index );
};


#endif