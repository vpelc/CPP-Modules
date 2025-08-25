#pragma once

#include <vector>
#include <exception>

class numberNotFound : public std::exception {
	public :
		const char* what() const throw() { return "error"; }

};

template <typename T>
int easyfind(T container, int n)
{
	for(typename T::iterator it = container.begin(); it != container.end(); ++it)
	{
		if (*it == n)
			return *it;
	}
	throw numberNotFound();
	return 0;
}
