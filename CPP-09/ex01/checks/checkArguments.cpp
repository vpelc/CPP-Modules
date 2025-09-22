#include "checks.hpp"


void check_nb_arg(int argc)
{
	if (argc > 2)
		throw tooManyArgmunentsException();
	else if (argc < 2)
		throw tooFewArgmunentsException();
}
