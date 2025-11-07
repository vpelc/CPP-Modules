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
	return *this;
}

std::map<std::string, float>::const_iterator
	BitcoinExchange::findClosestDate (const std::string& target)
{
	std::map<std::string, float>::const_iterator it =
		_dataFile_list.upper_bound(target);
	--it;
	return it;
}

void BitcoinExchange::search_rate_for_value()
{
	std::map<std::string, float>::const_iterator data_it;
	float r_value;
	for (std::map<std::string, float>::iterator input_it = _inputFile_list.begin();
			input_it != _inputFile_list.end(); ++input_it)
	{
		try {
			// std::cout << input_it->first << "    ";
			// std::cout << input_it->second << std::endl;
			check_date(input_it->first);
			check_value(input_it->second);
			data_it = findClosestDate(input_it->first);
			r_value =  input_it->second * data_it->second;
			std::cout << "(" << input_it->first << ") => " << std::fixed << std::setprecision(7)
			<< input_it->second << " = " << r_value << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}