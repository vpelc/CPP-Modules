#include "utils.hpp"

bool isspecialliteral(std::string param)
{
	return (param.compare("nan") == 0 || param.compare("nanf") == 0 
			|| param.compare("+inf") == 0 || param.compare("+inff") == 0 
			|| param.compare("-inf") == 0 || param.compare("-inff") == 0 );
}

bool issigndigit(char sign, char num)
{
	bool res = false;

	if (sign == '-' || sign == '+')
		res = true;
	if (!isdigit(num))
		res = false;
	return res;
}