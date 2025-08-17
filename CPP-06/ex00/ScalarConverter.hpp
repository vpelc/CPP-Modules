#pragma once

#include <string>
#include <iomanip>
#include <iostream>
#include <climits>
#include <cfloat>
#include <cctype>
#include <cstdlib>

#include "utils/utils.hpp"

class ScalarConverter 
{

	private :
							ScalarConverter( void );
							ScalarConverter( const ScalarConverter& copy);
							~ScalarConverter( void );

		ScalarConverter		&operator=(ScalarConverter const &src);

	public :
		static void			convert(std::string str);
};