/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:54 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/07 19:00:42 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Phonebook::Phonebook(void) : nbr_contact(0){}

Phonebook::~Phonebook(void){}

int	Phonebook::get_nbrContact(void)
{
	return this->nbr_contact;
}

/*
	Uses getline with an added security if Ctrl-D is pressed
*/
void	Phonebook::ft_getline(std::string &input)
{
	getline(std::cin, input);
	if (std::cin.eof() == true)
	{
		std::cout << std::endl << "Exiting (EOF signal)" << std::endl;
		exit(0);
	}
}

/*
	Shifts the array by -1 
		Deletes the first object(contact) of the array by writting over it
	Adds the new contact at the end of the array
*/
void	Phonebook::add_fulllist(void)
{
	Contact	new_contact;
	
	for(int i = 1; i < 8; i++)
		contact_list[i - 1] = contact_list[i];
	new_contact = Contact::new_contact();
	contact_list[7] = new_contact;
}

/*
	Checks if the phonebook is full
		if full : displays a message that it is full
					and ask if the user wants to continue
					(because adding a new contact will delete the oldest one)
			if yes : cf add_fulllist(void)
			if no  : quits to the base menu
			else   : quits to the base menu (not the same message)
		else    : simply adds the contact
					increases the total of contact
*/
void	Phonebook::add_contact(void)
{
	Contact 	new_contact;
	std::string	input; 

	if (nbr_contact > 7)
	{
		std::cout << "Contact list full. ";
		std::cout << "Adding this contact will erase the oldest one (index 1)" << std::endl;
		std::cout << "Do you want to continue (Y/n)" << std::endl;
		ft_getline(input);
		if (input.compare("Y") == 0 || input.compare("y") == 0 || input.compare("\n") == 0)
			add_fulllist();
		else if (input.compare("n") == 0 || input.compare("N") == 0)
			std::cout << "Canceling..." << std::endl;
		else
			std::cout << "Incorrect input. Exiting..." << std::endl;
		return ;
	}
	new_contact = Contact::new_contact();
	contact_list[nbr_contact] = new_contact;
	nbr_contact++;
}

/*
	Displays all the contact's :
		Index | first name | last name | nickname
	Let's the user choose the index of the contact
	that the user wants to see 
	converts to int and checks if the input is correct
	if incorrect
		if index is inside the phonebook (0 < x < 8)
			but there is no contact error message
			and goes back to base menu
		else error message and goes back to base menu
	else displays complete information of the contact
*/
void	Phonebook::search_contact(void)
{
	std::string index;
	int			ind;

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
	std::cout << "Choose the index of the contact you want to see" << std::endl;
	ft_getline(index);
	ind = atoi(index.c_str());
	if (ind <= 0 || ind > nbr_contact)
	{
		if (ind > nbr_contact && ind <= 8)
			std::cout << "No contact added at this index yet" << std::endl;
		else	
			std::cout << "Wrong index number. Exiting search" << std::endl;
		return ;
	}
	else
	{
		std::cout << "First name : " << contact_list[ind - 1].get_firstname() << std::endl;
		std::cout << "Last name : " << contact_list[ind - 1].get_lastname() << std::endl;
		std::cout << "Nickname : " << contact_list[ind - 1].get_nickname() << std::endl;
		std::cout << "Phone number : " << contact_list[ind - 1].get_phonenbr() << std::endl; 
		std::cout << "Darkest secret : " << contact_list[ind - 1].get_drksecret() << std::endl;
	}
}

/*
	displays the string given cuts it so it's
	10 characters and replaces the last char with '.'
*/
void	Phonebook::print_search(std::string str)
{
	std::string cutstr;
	
	cutstr = str.substr(0, 10);
	cutstr[9] = '.';
	std::cout << std::right << std::setw(10) << cutstr;
	std::cout << "|";
}