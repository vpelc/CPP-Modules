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

 