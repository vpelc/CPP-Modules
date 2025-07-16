#pragma once

#include <string>
#include "../Form/AForm.hpp"
#include "../Form/FormTypes/PresidentialPardonForm.hpp"
#include "../Form/FormTypes/RobotomyRequestForm.hpp"
#include "../Form/FormTypes/ShrubberyCreationForm.hpp"


class Intern
{
	public :

					Intern( void );
					Intern( const Intern &copy);
					~Intern( void );

	class InvalidFormNameException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	AForm			*makeForm(std::string form, std::string target);

	Intern			&operator=(Intern const &src);

};
