/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:54 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/06 16:23:39 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.h"
#include "contact.h"

Phonebook::Phonebook(void){}

Phonebook::~Phonebook(void){}

void	Phonebook::add_contact(void)
{
	Contact	new_contact;
	
	std::cout << "You chose to add a contact. Please fill out the informations" << std::endl;
	std::cout << "First name :";
	std::cin >> new_contact.first_name;
	std::cout << "Last name :";
	std::cin >> new_contact.last_name;
	std::cout << "Nickname :";
	std::cin >> new_contact.nickname;
	std::cout << "Phone number :"; 
	std::cin >> new_contact.phone_number;
	std::cout << "Darkest secret :";
	std::cin >> new_contact.darkest_secret;
}