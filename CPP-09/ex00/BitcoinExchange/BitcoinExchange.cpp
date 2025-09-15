#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char **argv)
{
	dataFile.open("data.csv", std::ifstream::in);
	inputFile.open(argv[1], std::ifstream::in);
	if (!dataFile || !inputFile)
		throw openFileErrorException();
}

void BitcoinExchange::fill_input_list()
{
	int i = 0;
	std::string buffer;

	getline(inputFile, buffer);
	while (!buffer.empty())
	{
		getline(inputFile, buffer);
		
	}
}