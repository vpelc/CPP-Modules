/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:50 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/07 18:18:18 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::string zName1 = "Zimmy";
	Zombie* Zimmy = NULL;
	
	Zimmy = Zimmy->zombieHorde(5, zName1);	

	delete[] Zimmy;
}
