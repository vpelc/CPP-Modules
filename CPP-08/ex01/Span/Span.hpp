#pragma once 

#include <vector>
#include <exception>
#include <cmath>
#include <climits>
#include <random>
#include <ctime>

class Span {

	private :
		std::vector<int>	_list;

		unsigned int		_maxLength;
		unsigned int		_currLength;


	public :

							Span();
							Span(unsigned int n);
							Span(const Span &src);
							~Span();

		Span 				&operator=(Span const &src);

		class listFullException : public std::exception{
			const char* what() const throw() { return "error : list is full already.";}
		};

		class listEmptyException : public std::exception{
			const char* what() const throw() { return "error : list is empty. No span can be calculated";}
		};

		class oneMemberListException : public std::exception{
			const char* what() const throw() { return "error : list has only one member. No span can be calculated";}
		};

		// class negativeOrZeroNumException : public std::exception{
		// 	const char* what() const throw() { return "error : can not create list of number of negative length";}
		// };

		class tooManyNumbersException : public std::exception{
			const char* what() const throw() { return "error : too many numbers to add to the list, does not fit max length";}
		};


		void				addNumber(int num);
		void				multiAddNumber(unsigned int n);
		int					shortestSpan();
		int					longestSpan();

};