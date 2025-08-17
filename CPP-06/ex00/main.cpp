#include "ScalarConverter.hpp"

int main ()
{
	ScalarConverter::convert("3.14");
	ScalarConverter::convert("3.14159f");
	ScalarConverter::convert("H");
	ScalarConverter::convert("nan");
	ScalarConverter::convert("-inff");
	ScalarConverter::convert("inf");
	ScalarConverter::convert("+inf");
	ScalarConverter::convert("Hello");
	
	return 0;
}