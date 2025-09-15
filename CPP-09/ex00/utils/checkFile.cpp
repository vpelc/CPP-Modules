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

int get_time(std::string date)
{
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
	int year, month, day;
	

}

void check_year(std::string year)
{
	if (year.length() != 4)
		throw wrongFormatException();
	for (int i = 0; i < 4; i++)
	{
		if (!isdigit(year[i]))
		throw wrongFormatException();
	}
	int y = atoi(year.c_str());
	if (y < 2009)
		throw wrongFormatException();		// change exception impossible year
}


void check_date()
{

}

void check_input_format(std::string line)
{
	int sep_pos;
	
	sep_pos = line.find('|');
	std::string date = line.substr(0, sep_pos);
	
}

