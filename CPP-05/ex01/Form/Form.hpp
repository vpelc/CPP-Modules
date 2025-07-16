#pragma once 

#include <string>
#include <iostream>
#include "../Bureaucrat/Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	private :
		const std::string		_name;
		bool					_signed;
		const int				_grade_to_sign;
		const int				_grade_to_exec;

		class GradeTooHighException : public std::exception
		{
			public :
				const char*		what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char*		what() const throw();	
		};

	public :
								Form(std::string name, int to_sign, int to_exec);
								Form(const Form& copy);
								~Form( void );

		Form					&operator=(Form const &src);

		bool					isHigherGrade(int burGrade, int limit);
		bool					isLowerGrade(int burGrade, int limit);

		int						beSigned( Bureaucrat &bur);

		const std::string		getName( void ) const;
		bool					isSigned( void ) const;
		int						getGradeToSign( void ) const;
		int						getGradeToExecute( void ) const;

};

std::ostream &operator<<(std::ostream &o, Form&src);