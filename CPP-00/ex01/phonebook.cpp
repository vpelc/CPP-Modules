/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:54 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/09 18:37:25 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.h"
#include "contact.h"

Phonebook::Phonebook(void){}

Phonebook::~Phonebook(void){}

void	Phonebook::add_contact(Phonebook phonebook)
{
	Contact contact;

	if (phonebook.nbr_contact > 7)
		return ;
	phonebook.contact_list[phonebook.nbr_contact] = contact.new_contact();
}

void	Phonebook::search_contact(Phonebook phonebook)
{
	for(int i = 0; i < phonebook.nbr_contact; i++)
	{
		phonebook.print_search(phonebook.contact_list[i].get_firstname());
		phonebook.print_search(phonebook.contact_list[i].get_lastname());
		phonebook.print_search(phonebook.contact_list[i].get_nickname());
		phonebook.print_search(phonebook.contact_list[i].get_phonenbr());
		phonebook.print_search(phonebook.contact_list[i].get_drksecret());
		
	}


}

void	Phonebook::print_search(char *str)
{
	for(int j = 0; j < 10; j++)
	{

	}
}