#include "BitcoinExchange.hpp"

std::string input_get_date_from_line(std::string line)
{
	int sep_pos;
	
	sep_pos = line.find('|');
	std::string date = line.substr(0, sep_pos - 1);
	return date;
}

float input_get_value_from_line(std::string line)
{
	int sep_pos;
	
	sep_pos = line.find('|');
	std::string val = line.substr(sep_pos + 1, line.length());
	char *end;
	float value = std::strtof(val.c_str(), &end);
	return value;
}

void BitcoinExchange::input_add_line_to_list(std::string line)
{
	std::string date = input_get_date_from_line(line);
	float value = input_get_value_from_line(line);
	_inputFile_list.insert(std::make_pair(date, value));
}

void BitcoinExchange::fill_input_list()
{
	int i = 0;
	std::string line;

	getline(_inputFile, line);
	while (!line.empty())
	{
		getline(_inputFile, line);
		check_input_format(line);
		input_add_line_to_list(line);
	}
}