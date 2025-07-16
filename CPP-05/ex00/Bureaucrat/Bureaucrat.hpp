#pragma once

#include <string>
#include <iostream>

class Bureaucrat
{

	private : 
		const std::string	_name;
		int					_grade;
		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();	
		};

	public :
							Bureaucrat(std::string name, int grade);
							Bureaucrat(const Bureaucrat &copy);
							~Bureaucrat( void );

		void				incrementGrade( void );
		void				decrementGrade( void );


		Bureaucrat			&operator=(Bureaucrat const &src);
		
		const std::string	getName( void ) const;
		int					getGrade( void ) const;

};

std::ostream &operator<<(std::ostream &o, Bureaucrat &src);