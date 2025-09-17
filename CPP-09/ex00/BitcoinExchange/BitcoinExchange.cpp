#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char **argv) : _inputFile_name(argv[1])
{
	_dataFile.open("data.csv", std::ifstream::in);
	_inputFile.open(_inputFile_name, std::ifstream::in);
	if (!_dataFile || !_inputFile)
		throw openFileErrorException();
	fill_data_list();
	fill_input_list();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
: _inputFile_name(src._inputFile_name), 
	_dataFile_list(src._dataFile_list), _inputFile_list(src._inputFile_list)
{
	_dataFile.open("data.csv", std::ifstream::in);
	_inputFile.open(_inputFile_name, std::ifstream::in);
	if (!_dataFile || !_inputFile)
		throw openFileErrorException();
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
	if (this != &src)
	{
		_inputFile_name = src._inputFile_name;
		_dataFile_list = src._dataFile_list;
		_inputFile_list = src._inputFile_list;
		_dataFile.open("data.csv", std::ifstream::in);
		_inputFile.open(_inputFile_name, std::ifstream::in);
		if (!_dataFile || !_inputFile)
			throw openFileErrorException();
	}
}

std::map<std::string, float>::const_iterator BitcoinExchange::findClosestDate (const std::string& target)
{
	std::map<std::string, float>::const_iterator it =
		std::upper_bound(_dataFile_list.begin(), _dataFile_list.end(), target);
	--it;
	return it;
}

float BitcoinExchange::search_rate_for_value()
{
	std::map<std::string, float>::const_iterator data_it;
	for (std::map<std::string, float>::iterator input_it = _inputFile_list.begin();
			input_it != _inputFile_list.end(); input_it++)
	{
		data_it = findClosestDate(input_it->first);
		return input_it->second * data_it->second ;
	}
}