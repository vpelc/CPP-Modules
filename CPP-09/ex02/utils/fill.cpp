#include "utils.hpp"

std::vector<int> fill_vector(int argc, char** argv)
{
	std::vector<int> vec;
	
	vec.reserve(argc - 1);
	for (int i = 1; i < argc; i++)
	{
		vec.push_back(atoi(argv[i]));
	}
	return vec;
}

std::deque<int> fill_deque(int argc, char** argv)
{
	std::deque<int> deq;
	for (int i = 1; i < argc; i++)
	{
		deq.push_back(atoi(argv[i]));
	}
	return deq;
}