/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:19:43 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/09 13:11:43 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char* argv[] )
{
	Harl classicHarl;

	srand(time(0));
	if (argc != 2)
	{
		std::cerr << "You don't to play? Come on LoL is fun" << std::endl;
		return 1;
	}
	classicHarl.complain(argv[1]);
	return 0;
}