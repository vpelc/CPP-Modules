#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <fstream>


class BitcoinExchange{

	private :

		std::map<std::string, int> list;
		std::ifstream file;

	public :

		BitcoinExchange(std::ifstream &file, char *argv);
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();

		BitcoinExchange	&operator=(BitcoinExchange const &src);

		
};