#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( const ScalarConverter &copy ) { (void)copy; }

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter &ScalarConverter::operator=( ScalarConverter const &src) { (void)src; return *this; }

void NaNConverter( void )
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void maxConverter( void )
{
	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << INT_MAX << std::endl;
	std::cout << "float: " << FLT_MAX << std::endl;
	std::cout << "double: " << DBL_MAX << std::endl;
}
void minConverter( void )
{
	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << INT_MIN << std::endl;
	std::cout << "float: " << FLT_MIN << std::endl;
	std::cout << "double: "<< DBL_MIN << std::endl;
}

void specialConverter(std::string param)
{
	if (param.compare("nan") == 0 || param.compare("nanf") == 0)
		NaNConverter();
	else if (param.compare("+inf") == 0 || param.compare("+inff") == 0 )
		maxConverter();
	else
		minConverter();
}

void charConverter(char *param)
{
	char c = param[0];

	if (c >= 32 && c <= 126)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void intConverter(char *param)
{
	int i = atoi(param);
	char c = static_cast<unsigned char>(i);

	if (c >= 32 && c <= 126)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void floatConverter(char *param)
{
	float f = strtof(param, NULL);
	char c = static_cast<unsigned char>(f);

	if (c >= 32 && c <= 126)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}
void doubleConverter(char *param)
{
	double d = strtod(param, NULL);
	char c = static_cast<unsigned char>(d);

	if (c >= 32 && c <= 126)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert(std::string param)
{
	if (isspecialliteral(param))
		specialConverter(param);
	else if (isprint(param[0]) && !isdigit(param[0]) && param.size() == 1)
		charConverter(const_cast<char *>(param.c_str()));
	else if (isdigit(param[0]) || issigndigit(param[0], param[1]))
	{
		if (param.find(".") != std::string::npos)
		{
			if (param.find("f") != std::string::npos)
				floatConverter(const_cast<char *>(param.c_str()));
			else
				doubleConverter(const_cast<char *>(param.c_str()));
		}
		else
			intConverter(const_cast<char *>(param.c_str()));
	}
	else
		std::cout << "Input error" << std::endl;
}
