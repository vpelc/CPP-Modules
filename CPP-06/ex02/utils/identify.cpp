#include "utils.hpp"

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer is A" << std::endl;

	if (dynamic_cast<B *>(p))
		std::cout << "Pointer is B" << std::endl;

	if (dynamic_cast<C *>(p))
		std::cout << "Pointer is C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);

		std::cout << "Its of type A" << std::endl;
		(void)a;
	}
	catch (std::exception &e)
	{
		// std::cout << e.what() << std::endl;
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "Its of type B" << std::endl;
		(void)b;
	}
	catch (std::exception &e)
	{
		// std::cout << e.what() << std::endl;
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "Its of type C" << std::endl;
		(void)c;
	}
	catch (std::exception &e)
	{
		// std::cout << e.what() << std::endl;
	}
}