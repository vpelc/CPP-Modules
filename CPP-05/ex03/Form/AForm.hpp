#pragma once 

#include <string>
#include <iostream>
#include "../Bureaucrat/Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	private :
		const std::string		_name;
		bool					_signed;
		const int				_grade_to_sign;
		const int				_grade_to_exec;

	protected :
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
								AForm(std::string name, int to_sign, int to_exec);
								
	public :
								
		virtual					~AForm( void );

		int						beSigned( Bureaucrat &bur);
		virtual int				execute(Bureaucrat const &bur) const ;
		
		AForm					&operator=(AForm const &src);

		bool					isHigherGrade(int burGrade, int limit) const;
		bool					isLowerGrade(int burGrade, int limit) const;

		const std::string		getName( void ) const;
		bool					isSigned( void ) const;
		int						getGradeToSign( void ) const;
		int						getGradeToExecute( void ) const;

};

std::ostream &operator<<(std::ostream &o, AForm& src);
