/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:32 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/09 15:26:33 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

Contact::Contact(void){}

Contact::~Contact(void){}

char *Contact::check_size(char *str)
{
	if (strlen(str) > 10){
		str[9] = '.';
		str[10] = '\0';
	}
	return str;
}

Contact	Contact::new_contact(void)
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
	
	return new_contact;
}