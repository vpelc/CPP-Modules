#include "checks.hpp"



void check_dup(int argc, char** argv)
{
	for (int i = 1; i < argc; ++i)
	{
		for (int j = i + 1; j < argc; ++j)
		{
			if (std::string(argv[i]) == std::string(argv[j]))
			{
				throw std::invalid_argument("duplicate argument found: " + std::string(argv[i]));
			}
		}
	}
}

void check_arg_content(std::string arg)
{
	char* endptr;

	if (arg[0] == '-')
		throw std::invalid_argument ("only positive numbers allowed");
	long nbr = strtol(arg.c_str(), &endptr, 10);
	if (endptr == arg.c_str() || (*endptr != '\0'))
		throw std::invalid_argument ("only number args are allowed");
	if (nbr > INT_MAX)
		throw std::invalid_argument ("only int range args are allowed");
}

void check_arg(int argc, char** argv)
{
	if (argc == 1)
		throw std::invalid_argument ("there should be at least 2 arguments");
	for (int i = 1; i < argc; i++)
		check_arg_content(argv[i]);
	check_dup(argc, argv);
}
