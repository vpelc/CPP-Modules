/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:54 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/09 16:43:02 by vpelc            ###   ########.fr       */
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
		for()
		
	}


}

void	Phonebook::print_search(char *str)
{
	for(int j = 0; j < 10; j++)
	{

	}
}