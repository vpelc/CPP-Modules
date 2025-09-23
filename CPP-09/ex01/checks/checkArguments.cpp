#include "checks.hpp"


void check_nb_arg(int argc)
{
	if (argc > 2)
		throw tooManyArgmunentsException();
	else if (argc < 2)
		throw tooFewArgmunentsException();
}

bool is_operator(char c)
{
	if (c == '+')
		return true;
	else if (c == '-')
		return true;
	else if (c == '*')
		return true;
	else if (c == '/')
		return true;
	else
		throw invalidCharException();
	return false;
}