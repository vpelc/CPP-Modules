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

	{
		Span c(5);
		
		srand(time(0));

		try{
			c.addNumber(6);
			c.addNumber(3);
			c.addNumber(9);
			c.addNumber(17);
			c.addNumber(11);
			// c.addNumber(92);
			
			std::cout << "Longest span : " << c.longestSpan() << std::endl;
			std::cout << "Shortest span : " << c.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}