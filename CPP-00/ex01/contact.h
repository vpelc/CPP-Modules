/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:23 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/06 16:50:31 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Contact
{
	private :
		char *first_name;
		char *last_name;
		char *nickname;
		char *phone_number;
		char *darkest_secret;
		
	public :
		void	add_contact(void);
		char *check_size(char *str);
		Contact(void);
		~Contact(void);
		
};


#endif