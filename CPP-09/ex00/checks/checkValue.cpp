#include "checks.hpp"

void check_value(float value)
{
	if (value < 0 && value > MAX_VALUE)
		throw wrongFormatException();		// not a valid number
}