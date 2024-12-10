/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:43 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/10 16:53:42 by vpelc            ###   ########.fr       */
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
		Phonebook(void) : nbr_contact(0){}
		~Phonebook(void);
		int	get_nbrContact(void);
		void add_contact(void);
		void search_contact(void);
		void print_search(std::string str);
};


#endif