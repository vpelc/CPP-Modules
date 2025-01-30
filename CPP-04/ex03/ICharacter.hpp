/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:48:01 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/30 17:53:25 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACHTER_HPP
#define ICHARACHTER_HPP

# include <string>
# include "AMateria.hpp"

class ICharacter
{
	public:
	
		virtual 					~ICharacter() {}
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
};

#endif