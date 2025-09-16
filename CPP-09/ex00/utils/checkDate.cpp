#include "utils.hpp"

static int check_bounds(int year, int month, int day)
{
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
	
	if ((year > now->tm_year + 1900)
		|| (year == (now->tm_year + 1900) && (month > now->tm_mon))
		|| ((year == now->tm_year) && (month == now->tm_mon)	&& (day > now->tm_mday)))
		throw wrongFormatException();		// future dates not allowed
	else if (year < 2009)
		throw wrongFormatException();		// dates before btc not allowed
}

static void check_valid_date(int year, int month, int day)
{
	if (month < 1 || month > 12)
		throw wrongFormatException();		// invalid month	
	if (day < 1 || day > 31)
		throw wrongFormatException();		// invalid day
	if ((((month < 8 && month % 2 == 0)
			|| (month > 7 && month % 2 == 1))) 
		&& day > 30)
		throw wrongFormatException();		// invalid day short months
	if ((month == 2 && year % 4 == 0 && day > 29)
		|| (month == 2 && year % 4 != 0 && day > 28))
		throw wrongFormatException();		// invalid day february

}

void check_date(std::string date)
{
	int year, month, day;
	char sep;
	std::stringstream ss(date);
	ss >> year >> sep >> month >> sep >> day;
	if (ss.fail() || sep != '-')
		throw wrongFormatException();
	check_valid_date(year,  month, day);
	check_bounds(year, month, day);
}