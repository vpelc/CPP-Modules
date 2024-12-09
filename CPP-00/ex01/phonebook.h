/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:43 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/09 16:42:45 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Phonebook{

	private:
		Contact	contact_list[8];
		int		nbr_contact;

	public :
		Phonebook(void);
		~Phonebook(void);
		void add_contact(Phonebook phonebook);
		void search_contact(Phonebook phonebook);
		void print_search(char *str);
};


#endif