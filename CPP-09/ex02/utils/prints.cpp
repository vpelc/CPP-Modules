#include "utils.hpp"

std::string before_sort(int argc, char** argv)
{
	std::string str("");
	str.reserve(argc + 1);
	str += "[";
	str += argv[1];
	for (int i = 2; argv[i]; i++)
	{
		str += " ";
		str += argv[i];
	}
	str += "]";
	return str;
}

std::string after_sort(std::vector<int>& vec)
{
	std::stringstream ss;
	ss << "[" << vec[0];
	for (size_t i = 1; i < vec.size(); i++)
	{
		ss << " " << vec[i];
	}
	ss << "]";
	return ss.str();
}