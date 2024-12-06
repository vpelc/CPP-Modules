/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:11:32 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/06 15:00:38 by vpelc            ###   ########.fr       */
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