#include "utils/Array.hpp"
#include <iostream>

int main()
{
	
	Array<int> no_array;
	std::cout << no_array[0] << std::endl;


	Array<int> new_array(10);
	new_array[0] = 14;
	new_array[3] = 12;
	for (int i = 0; i < new_array.size(); i++)
	{
		if (i + 1 != new_array.size())
			std::cout << new_array[i] << " , ";
		else
			std::cout << new_array[i] << std::endl;
	}

	
	no_array = new_array;
	for (int i = 0; i < new_array.size(); i++)
	{
		if (i + 1 != new_array.size())
			std::cout << new_array[i] << " , ";
		else
			std::cout << new_array[i] << std::endl;
	}
	
	return 0;
}