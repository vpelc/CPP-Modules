#pragma once 

#include <stack>
#include <exception>
#include <locale>

class RPN{

	private :

		std::stack<int> 	_num_stack;
		std::stack<char>	_oper_stack;



	public :

		RPN();
		RPN(const RPN &src);
		~RPN();

		RPN			&operator=(RPN const &src);

		void		addition(void);
		void		substraction(void);
		void		multiplication(void);
		void		division(void);

		bool		is_operator(char c);
		void		parse(char *arg);


		class divisionByZeroException : public std::exception{
			const char* what() const throw()
				{ return "error : could not open file";}
		};

		class invalidCharException : public std::exception{
			const char* what() const throw()
				{ return "error : could not open file";}
		};
};