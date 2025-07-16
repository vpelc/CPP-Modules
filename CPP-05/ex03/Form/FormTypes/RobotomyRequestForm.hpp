#pragma once

#include <string>
#include <iostream>
#include "../AForm.hpp"

class RobotomyRequestForm : public AForm
{

	private :
		std::string					_target;


	public :
									RobotomyRequestForm(std::string target);
									RobotomyRequestForm(const RobotomyRequestForm &form);
									~RobotomyRequestForm( void );

	int								execute(Bureaucrat const &bur) const;
	std::string						getTarget( void ) const;
	
	RobotomyRequestForm				&operator=(RobotomyRequestForm const &src);

};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm& src);