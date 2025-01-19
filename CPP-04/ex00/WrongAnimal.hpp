/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:18:47 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/17 17:26:53 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal{
	
	protected :
	
		std::string		type;	
		
	public :
	
		virtual void	makeSound( void ) const;
						WrongAnimal( void );
						WrongAnimal(const WrongAnimal& copy);
		virtual			~WrongAnimal( void );
				
		WrongAnimal		&operator=(WrongAnimal const &src);

		std::string		getType( void ) const;
		void			setType( std::string type);
};

#endif