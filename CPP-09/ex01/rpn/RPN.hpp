#pragma once 

#include <stack>
#include <exception>
#include <locale>
#include "../checks/checks.hpp"

class RPN{

	private :

		std::stack<int> 	_num_stack;

	public :

		RPN();
		RPN(const RPN &src);
		~RPN();

		RPN			&operator=(RPN const &src);

		void		addition(void);
		void		substraction(void);
		void		multiplication(void);
		void		division(void);

		void		get_operator(char c);
		void		parse(char *arg);

		int			get_stack_top(void) const;

		class divisionByZeroException : public std::exception{
			const char* what() const throw()
				{ return "error : division by zero";}
		};

		class notEnoughNumbersException : public std::exception{
			const char* what() const throw()
				{ return "error : could not open file";}
		};

		class notEnoughOperatorsException : public std::exception{
			const char* what() const throw()
				{ return "error : could not open file";}
		};

		
};