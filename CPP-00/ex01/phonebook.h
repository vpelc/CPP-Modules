/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:28:43 by vpelc             #+#    #+#             */
/*   Updated: 2024/12/17 14:55:33 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
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
		int	get_nbrContact(void);
		void add_contact(void);
		void search_contact(void);
		void print_search(std::string str);
		static void ft_getline(std::string &input);
};


#endif