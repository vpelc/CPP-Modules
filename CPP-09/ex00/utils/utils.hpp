#pragma once

#include <exception>
#include <string>
#include <iostream>
#include <cstring>
#include <fstream>

class incorrectFileType : public std::exception{
	const char* what() const throw()
		{ return "error : incorrect file type";}
};

class tooManyArgmunents : public std::exception{
	const char* what() const throw()
		{ return "error : too many arguments";}
};

class tooFewArgmunents : public std::exception{
	const char* what() const throw()
		{ return "error : too few arguments";}
};

class openFileError : public std::exception{
	const char* what() const throw()
		{ return "error : could not open file";}
};

class emptyFileException : public std::exception{
	const char* what() const throw()
		{ return "error : file is empty";}
};


// CheckArguments

void	check_file_type(char *arg);
void	check_nb_arg(int argc);
void	check_arg(int argc, char *argv[]);

// CheckFile

void	check_if_empty(std::ifstream &file);
void	check_data_format();
// void	