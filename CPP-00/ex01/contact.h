/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:23 by vpelc             #+#    #+#             */
/*   Updated: 2024/11/29 18:11:28 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Contact{

	public :
		char *fist_name;
		char *last_name;
		char *nickname;
		char *phone_number;
		char *darkest_secret;
	private :
		char *check_size(char *str);
};

char *Contact::check_size(char *str){
	if (strlen(str) > 10){
		str[9] = '.';
		str[10] = '\0';
	}
	return str;
}

#endif