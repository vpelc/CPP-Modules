#include "BitcoinExchange.hpp"

std::string data_get_date_from_line(std::string line)
{
	int sep_pos;
	
	sep_pos = line.find(',');
	std::string date = line.substr(0, sep_pos);
	return date;
}

float data_get_value_from_line(std::string line)
{
	int sep_pos;
	
	sep_pos = line.find(',');
	std::string val = line.substr(sep_pos + 1, line.length());
	char *end;
	float value = std::strtof(val.c_str(), &end);
	return value;
}

void BitcoinExchange::data_add_line_to_list(std::string line)
{
	std::string date = data_get_date_from_line(line);
	float value = data_get_value_from_line(line);
	_dataFile_list.insert(std::make_pair(date, value));
}

void BitcoinExchange::fill_data_list()
{
	std::string line;

	getline(_dataFile, line);
	while (getline(_dataFile, line))
		data_add_line_to_list(line);
}

