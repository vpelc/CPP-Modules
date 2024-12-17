/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:25:48 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/17 14:47:53 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "phonebook.h"

void	ft_getline(std::string &input)
{
	getline(std::cin, input);
	if (std::cin.eof() == true)
	{
		std::cout << "Exiting (EOF signal)" << std::endl;
		exit(0);
	}
}

int main(void)
{
	Phonebook phonebook;
	std::string	input;

	while (1)
	{
		std::cout << std::endl << "Enter your command :" << std::endl;
		std::cout << "Options : \'ADD\', \'SEARCH\', \'EXIT\'" << std::endl;
		ft_getline(input);
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (input.compare("EXIT") == 0)
			break;
		else
			std::cout << "This is not one of the options. Please try again" << std::endl;
	}
}
 