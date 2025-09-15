#include "utils.hpp"


void check_file_type(char *arg)
{
	if (std::strlen(arg) < 4)
		throw incorrectFileType();
	char *ext = arg + (std::strlen(arg) - 4);
	if (std::strcmp(ext, ".txt"))
		throw incorrectFileType();
}

void check_nb_arg(int argc)
{
	if (argc > 2)
		throw tooManyArgmunents();
	else if (argc < 2);
		throw tooFewArgmunents();
}

void check_arg(int argc, char *argv[])
{
	check_nb_arg(argc);
	check_file_type(argv[1]);

}