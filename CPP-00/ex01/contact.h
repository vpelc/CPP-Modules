/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:23 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/10 15:06:08 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		
	public :
		Contact(void);
		~Contact(void);
		static Contact	new_contact(void);
		std::string check_size(std::string str);
		std::string get_firstname() const;
		std::string get_lastname() const;
		std::string get_nickname() const;
		std::string get_phonenbr() const;
		std::string get_drksecret() const;
		
};


#endif