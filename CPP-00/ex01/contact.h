/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:23 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/06 15:51:59 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Contact
{
	public :
		char *fist_name;
		char *last_name;
		char *nickname;
		char *phone_number;
		char *darkest_secret;
		Contact(void);
		~Contact(void);
	private :
		char *check_size(char *str);
};

#endif