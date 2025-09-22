#include "checks.hpp"

static void check_bounds(int year, int month, int day)
{
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
	
	if ((year > now->tm_year + 1900)
		|| (year == (now->tm_year + 1900) && (month > now->tm_mon))
		|| ((year == now->tm_year) && (month == now->tm_mon)	&& (day > now->tm_mday)))
		throw afterTodayException();		// future dates not allowed
	else if (year < 2009)
		throw beforeBtcException();		// dates before btc not allowed
}

static void check_valid_date(int year, int month, int day)
{
	if (month < 1 || month > 12)
		throw invalidMonthException();		// invalid month	
	if (day < 1 || day > 31)
		throw invalidDayException();		// invalid day
	if ((((month < 8 && month % 2 == 0)
			|| (month > 7 && month % 2 == 1))) 
		&& day > 30)
		throw invalidDayException();		// invalid day short months
	if ((month == 2 && year % 4 == 0 && day > 29)
		|| (month == 2 && year % 4 != 0 && day > 28))
		throw invalidDayException();		// invalid day february

}

void check_date(std::string date)
{
	int year, month, day;
	char sep;
	std::stringstream ss(date);
	if (ss >> year >> sep >> month >> sep >> day)
	{
		ss >> std::ws;
		if (!ss.eof() || sep != '-')
			throw wrongDateFormatException();
	}
	else
		throw wrongDateFormatException();
	check_valid_date(year,  month, day);
	check_bounds(year, month, day);
}