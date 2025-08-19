#include "utils/Array.hpp"
#include <iostream>

int main()
{
	
    Array<int> new_array(10);
    new_array[0] = 14;
    new_array[1] = 12;
	for (int i = 0; i < new_array.size(); i++)
	{
		if (i + 1 != new_array.size())
    		std::cout << new_array[i] << " , ";
		else
    		std::cout << new_array[i] << std::endl;
	}
	return 0;
}