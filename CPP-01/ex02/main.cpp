/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:20:25 by vpelc             #+#    #+#             */
/*   Updated: 2025/03/20 12:47:34 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Address of the string : " << &str << std::endl;
	std::cout << "Address of the pointer : " << stringPTR << std::endl;
	std::cout << "Address of the reference : " << &stringREF << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "Content of the string : " << str << std::endl;
	std::cout << "Content of the pointer : " << *stringPTR << std::endl;
	std::cout << "Content of the reference : " << stringREF << std::endl;
}