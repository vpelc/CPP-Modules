#include "checks.hpp"

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

void check_line_format(std::string line)
{
	size_t sep_pos;
	
	sep_pos = line.find('|');
	if (sep_pos == std::string::npos
		|| (line[sep_pos - 1] != ' ' && line[sep_pos + 1] != ' '))
		throw badInputException();

}
 