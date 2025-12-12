#pragma once

#include <vector>
#include <exception>
#include <algorithm>

class numberNotFoundException : public std::exception {
	public :
		const char* what() const throw() { return "error : number not found"; }

};

template <typename T>
int easyfind(T container, int n)
{
	typename T::iterator it;
	it = find(container.begin(), container.end(), n);
	if (it == container.end() && *it != n)
		throw numberNotFoundException();
	return *it;
}
