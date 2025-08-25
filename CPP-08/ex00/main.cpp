#include <iostream>
#include <vector>
#include <exception>
#include "Easyfind/easyfind.hpp"


int main()
{
	std::vector<int> v;
	int n = 0;

	for (int i = 0 ; i < 8; i++)
	{
		n = (n * 2) + 1;
		v.push_back(n);
	}
	try {

		std::cout << easyfind(v, 1) << std::endl;
		std::cout << "-=-=-=-" << std::endl;
		std::cout << easyfind(v, 0) << std::endl;
		std::cout << "-=-=-=-" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}