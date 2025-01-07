/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:32 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/07 19:03:07 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"
#include "phonebook.h"

Contact::Contact(void){}

Contact::~Contact(void){}

std::string Contact::get_firstname(void) const
{
	return this->first_name;
}
std::string Contact::get_lastname(void) const
{
	return this->last_name;
}
std::string Contact::get_nickname(void) const
{
	return this->nickname;
}
std::string Contact::get_phonenbr(void) const
{
	return this->phone_number;
}
std::string Contact::get_drksecret(void) const
{
	return this->darkest_secret;
}

std::string Contact::check_size(std::string str)
{
	if (str.size() > 10){
		str[9] = '.';
		str[10] = '\0';
	}
	return str;
}

/*
	Creates a new contact
	Asks to fill all the information

	return the object
*/
Contact	Contact::new_contact(void)
{
	Contact	new_contact;
	
	std::cout << "You chose to add a contact. Please fill out the informations" << std::endl;
	std::cout << "First name : ";
	Phonebook::ft_getline(new_contact.first_name);
	std::cout << "Last name : ";
	Phonebook::ft_getline(new_contact.last_name);
	std::cout << "Nickname : ";
	Phonebook::ft_getline(new_contact.nickname);
	std::cout << "Phone number : "; 
	Phonebook::ft_getline(new_contact.phone_number);
	std::cout << "Darkest secret : ";
	Phonebook::ft_getline(new_contact.darkest_secret);
	
	return new_contact;
}