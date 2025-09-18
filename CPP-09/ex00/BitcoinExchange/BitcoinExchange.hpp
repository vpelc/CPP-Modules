#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>

#include "checks/checks.hpp"




class BitcoinExchange{

	private :

		char *							_inputFile_name;
		std::map<std::string, float>	_dataFile_list;
		std::map<std::string, float>	_inputFile_list;
		std::ifstream					_inputFile;
		std::ifstream					_dataFile;

	public :

		BitcoinExchange(char **argv);
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();

		BitcoinExchange	&operator=(BitcoinExchange const &src);

		void			fill_input_list(void);
		void			fill_data_list(void);
		void			input_add_line_to_list(std::string line);
		void			data_add_line_to_list(std::string line);
		void			search_rate_for_value();

		std::map<std::string, float>::const_iterator findClosestDate (const std::string& target);

		class openFileErrorException : public std::exception{
			const char* what() const throw()
				{ return "error : could not open file";}
		};	
};