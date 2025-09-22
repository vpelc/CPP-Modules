#pragma once

#include <exception>
#include <string>
#include <iostream>
#include <cstring>
#include <fstream>
#include <ctime>
#include <sstream>

# define MAX_VALUE 1000

// CheckArguments

void	check_file_type(char *arg);
void	check_nb_arg(int argc);
void	check_arg(int argc, char *argv[]);

// CheckFile

void	check_if_empty(std::ifstream &file);
void	check_input_format(std::string);

// CheckDate

void	check_date(std::string date);

// CheckValue

void	check_value(float value);



// CheckArguments

class incorrectFileTypeException : public std::exception{
	const char* what() const throw()
		{ return "error : incorrect file type";}
};

class tooManyArgmunentsException : public std::exception{
	const char* what() const throw()
		{ return "error : too many arguments";}
};

class tooFewArgmunentsException : public std::exception{
	const char* what() const throw()
		{ return "error : too few arguments";}
};


// CheckFile

class openFileErrorException : public std::exception{
	const char* what() const throw()
		{ return "error : could not open file";}
};

class emptyFileException : public std::exception{
	const char* what() const throw()
		{ return "error : file is empty";}
};

class badInputException : public std::exception{
	const char* what() const throw()
		{ return "error : bad input";}
};


// CheckDate


class invalidMonthException : public std::exception{
	const char* what() const throw()
		{ return "error : invalid month";}
};

class invalidDayException : public std::exception{
	const char* what() const throw()
		{ return "error : invalid day";}
};

class wrongDateFormatException : public std::exception{
	const char* what() const throw()
		{ return "error : wrong date format";}
};
class afterTodayException : public std::exception{
	const char* what() const throw()
		{ return "error : date is in the future";}
};
class beforeBtcException : public std::exception{
	const char* what() const throw()
		{ return "error : date is before btc";}
};

// CheckValue


class valueTooSmallException : public std::exception{
	const char* what() const throw()
		{ return "error : number too small";}
};
class valueTooBigException : public std::exception{
	const char* what() const throw()
		{ return "error : number too big";}
};

class wrongFormatException : public std::exception{
	const char* what() const throw()
		{ return "error : wrong format";}
};
