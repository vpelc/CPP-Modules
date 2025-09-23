#pragma once

#include "../rpn/RPN.hpp"

class invalidCharException : public std::exception{
			const char* what() const throw()
				{ return "error : invalid char in input";}
		};

class tooManyArgmunentsException : public std::exception{
	const char* what() const throw()
		{ return "error : too many arguments";}
};

class tooFewArgmunentsException : public std::exception{
	const char* what() const throw()
		{ return "error : too few arguments";}
};

bool	is_operator(char c);
void	check_nb_arg(int argc);