#include "checks.hpp"

void check_value(float value)
{
	if (value < 0)
		throw valueTooSmallException();		// not a valid number
	if (value > MAX_VALUE)
		throw valueTooBigException();		// not a valid number
}