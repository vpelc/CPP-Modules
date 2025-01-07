/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:50 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/07 16:09:28 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::string zName1 = "Zimmy";
	Zombie* Zimmy = NULL;
	std::string zName2 = "Zulia";
	Zombie* Zulia = NULL;
	std::string zName3 = "Zessica";
	Zombie* Zessica = NULL;
	std::string zName4 = "Zhonny";
	Zombie *Zhonny = NULL;

	
	Zimmy = Zimmy->newZombie(zName1);
	Zulia = Zulia->newZombie(zName2);	
	Zessica = Zessica->newZombie(zName3);	
	Zhonny = Zhonny->newZombie(zName4);	

	Zimmy->randomChump(zName1);
	Zulia->randomChump(zName2);
	Zessica->randomChump(zName3);
	Zhonny->randomChump(zName4);

	delete Zimmy;
	delete Zulia;
	delete Zessica;
	delete Zhonny;
}
