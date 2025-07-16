#pragma once

#include <string>
#include <iostream>
#include "../AForm.hpp"

class ShrubberyCreationForm : public AForm
{

	private :
		std::string					_target;


	public :
									ShrubberyCreationForm(std::string target);
									ShrubberyCreationForm(const ShrubberyCreationForm &form);
									~ShrubberyCreationForm( void );

	int								execute(Bureaucrat const &bur) const;
	std::string						getTarget( void ) const;
	
	ShrubberyCreationForm			&operator=(ShrubberyCreationForm const &src);
	
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm& src);