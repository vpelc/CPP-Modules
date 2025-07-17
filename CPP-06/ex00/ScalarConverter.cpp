#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( const ScalarConverter &copy ) { (void)copy; }

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter &ScalarConverter::operator=( ScalarConverter const &src) { return *this; }

// check if special literal : nan nanf -inf -inff +inf +inff


// below is bullshit 

// check if not digit -> check for sign

// if digit check for last char 
	// if f -> float
	// search for .
	// if no . -> int
	// if . -> double 