#include "Span/Span.hpp"
#include <iostream>

int main()
{
	{
		Span a(16);
		
		srand(time(0));

		try{
			a.addNumber(8);
			a.addNumber(55);
			a.multiAddNumber(14);
			
			// a.addNumber(14);
			
			std::cout << "Longest span : " << a.longestSpan() << std::endl;
			std::cout << "Shortest span : " << a.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		Span b(4);
		b = Span(8);

		srand(time(0));

		try{
			b.addNumber(0);

			b.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}