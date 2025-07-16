#pragma once

#include <string>
#include <iostream>
#include "../AForm.hpp"

class PresidentialPardonForm : public AForm
{

	private :
		std::string					_target;


	
		
	public :
									PresidentialPardonForm(std::string target);
									PresidentialPardonForm(const PresidentialPardonForm& form);
									~PresidentialPardonForm( void );

	int								execute(Bureaucrat const &bur) const;
	std::string						getTarget( void ) const;
	
	PresidentialPardonForm			&operator=(PresidentialPardonForm const &src);

};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm& src);
