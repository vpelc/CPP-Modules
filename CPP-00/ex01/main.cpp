/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:25:48 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/09 16:26:49 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "contact.h"
#include "phonebook.h"

int main(void)
{
	Phonebook phonebook;
	std::string	input;

	// while (1)
	// {
	std::cout << "Enter your command :" << std::endl;
	std::cout << "Options : \'ADD\', \'SEARCH\', \'EXIT\'" << std::endl;
	std::cin >> input;
	if (input.compare("ADD") == 0)
		phonebook.add_contact(phonebook);
	// if (input.compare("SEARCH") == 0)
	// 	phonebook.search_contact();
	// if (input.compare("EXIT") == 0)
	// 	break;
	// else
	// 	std::cout << "This is not one of the options. Please try again" << std::endl;
	// }
}
 