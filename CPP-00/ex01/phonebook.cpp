/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:54 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/13 14:10:49 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.h"
#include "contact.h"

Phonebook::Phonebook(void) : nbr_contact(0){}

Phonebook::~Phonebook(void){}

int	Phonebook::get_nbrContact(void)
{
	return this->nbr_contact;
}

void	Phonebook::add_contact(void)
{
	Contact new_contact;

	if (nbr_contact > 7)
		return ;
	new_contact = Contact::new_contact();
	contact_list[nbr_contact] = new_contact;
	nbr_contact++;
}

void	Phonebook::search_contact(void)
{
	int index;

	std::cout << std::left << "|Index     |First name|Last Name |Nickname  |" << std::endl;
	for(int i = 0; i < nbr_contact; i++)
	{
		std::cout << "|";
		std::cout << std::right << std::setw(10) << i + 1;
		std::cout << "|";		
		print_search(contact_list[i].get_firstname());
		print_search(contact_list[i].get_lastname());
		print_search(contact_list[i].get_nickname());
		std::cout << std::endl;
	}
	std::cin >> index;
	if (index < 0 || index > nbr_contact)
		return ;
	else
	{
		std::cout << "First name : " << contact_list[index - 1].get_firstname() << std::endl;
		std::cout << "Last name : " << contact_list[index - 1].get_lastname() << std::endl;
		std::cout << "Nickname : " << contact_list[index - 1].get_nickname() << std::endl;
		std::cout << "Phone number : " << contact_list[index - 1].get_phonenbr() << std::endl; 
		std::cout << "Darkest secret : " << contact_list[index - 1].get_drksecret() << std::endl;
	}
}

void	Phonebook::print_search(std::string str)
{
	std::string cutstr;
	
	cutstr = str.substr(0, 10);
	cutstr[9] = '.';
	std::cout << std::right << std::setw(10) << cutstr;
	std::cout << "|";
}