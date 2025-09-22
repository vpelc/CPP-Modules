#include "checks.hpp"


void check_file_type(char *arg)
{
	if (std::strlen(arg) < 4)
		throw incorrectFileTypeException();
	char *ext = arg + (std::strlen(arg) - 4);
	if (std::strcmp(ext, ".txt") && std::strcmp(ext, ".csv"))
		throw incorrectFileTypeException();
}

void check_nb_arg(int argc)
{
	if (argc > 2)
		throw tooManyArgmunentsException();
	else if (argc < 2)
		throw tooFewArgmunentsException();
}

void check_arg(int argc, char *argv[])
{
	check_nb_arg(argc);
	check_file_type(argv[1]);

}