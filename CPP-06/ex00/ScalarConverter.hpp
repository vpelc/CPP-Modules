#pragma once

#include <string>
#include <cctype>

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