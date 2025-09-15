#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <fstream>


# define MAX_VALUE 1000

class BitcoinExchange{

	private :

		std::map<std::string, double>	dataFile_list;
		std::map<std::string, double>	inputFile_list;
		std::ifstream					inputFile;
		std::ifstream					dataFile;

	public :

		BitcoinExchange(char **argv);
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();

		BitcoinExchange	&operator=(BitcoinExchange const &src);

		void			fill_input_list();

		class openFileErrorException : public std::exception{
			const char* what() const throw()
				{ return "error : could not open file";}
		};	
};