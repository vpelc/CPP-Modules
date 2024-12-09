/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:23 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/09 18:25:39 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	private :
		char *first_name;
		char *last_name;
		char *nickname;
		char *phone_number;
		char *darkest_secret;
		
	public :
		Contact(void);
		~Contact(void);
		Contact	new_contact(void);
		char *check_size(char *str);
		char *Contact::get_firstname() const;
		char *Contact::get_lastname() const;
		char *Contact::get_nickname() const;
		char *Contact::get_phonenbr() const;
		char *Contact::get_drksecret() const;
		
};


#endif