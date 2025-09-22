#pragma once

#include "../RPN/RPN.hpp"



class tooManyArgmunentsException : public std::exception{
	const char* what() const throw()
		{ return "error : too many arguments";}
};

class tooFewArgmunentsException : public std::exception{
	const char* what() const throw()
		{ return "error : too few arguments";}
};

void	is_operator(char c);
void	check_nb_arg(int argc);