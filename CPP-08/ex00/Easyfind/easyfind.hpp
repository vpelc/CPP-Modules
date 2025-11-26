#pragma once

#include <vector>
#include <exception>

class numberNotFoundException : public std::exception {
	public :
		const char* what() const throw() { return "error : number not found"; }

};

template <typename T>
int easyfind(T container, int n)
{
	for(typename T::iterator it = container.begin(); it != container.end(); ++it)
	{
		if (*it == n)
			return *it;
	}
	throw numberNotFoundException();
	return 0;
}
