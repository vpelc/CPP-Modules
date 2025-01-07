/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:57:25 by vpelc             #+#    #+#             */
/*   Updated: 2025/01/07 19:04:01 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

char	*to_upper(char *str);

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
		return 0;	
	}
	for(int i = 1; i < argc; i++)
	{
    	std::cout << to_upper(argv[i]);
	}
	std::cout << std::endl;
    return 0;  
}

/*
	changes all letter in lowercase to uppercase
*/
char	*to_upper(char *str)
{
	int len = strlen(str);
	for(int i = 0; i < len; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return str;
}

