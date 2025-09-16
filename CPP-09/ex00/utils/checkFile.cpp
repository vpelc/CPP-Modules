#include "utils.hpp"

void check_content_file(char *arg)
{
	std::ifstream file(arg, std::ifstream::in);
	if (!file)
		throw openFileErrorException();
	check_if_empty(file);

}

void check_if_empty(std::ifstream &file)
{
	std::string line;
	getline(file, line);
	if (line.empty())
		throw emptyFileException();
}



void check_input_format(std::string line)
{
	int sep_pos;
	
	sep_pos = line.find('|');
	std::string date = line.substr(0, sep_pos);
	check_date(date);
	std::string value = line.substr(sep_pos + 1,  line.length());
}

