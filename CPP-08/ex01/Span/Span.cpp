#include "Span.hpp"
#include <algorithm>

Span::Span() : _maxLength(0), _currLength(0) {}

Span::Span(unsigned int n) : _maxLength(n), _currLength(0) {}

Span::Span(const Span &src) : _list(src._list), 
	_maxLength(src._maxLength) , _currLength(src._currLength) {}

Span::~Span() {}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_list = src._list;
		_maxLength = src._maxLength;
		_currLength = src._currLength;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if (_currLength + 1 > _maxLength)
		throw listFullException();
	else{
		_list.push_back(num);
		_currLength++;
	}
}

int Span::shortestSpan()
{
	int shortest = INT_MAX;

	if (_currLength < 1)
		throw listEmptyException();
	if (_currLength == 1)
		throw oneMemberListException();

	Span tmp = *this;
	sort(tmp._list.begin(), tmp._list.end());
	for(std::vector<int>::iterator it = _list.begin(); it + 1 != _list.end(); ++it)
	{
		if (shortest > (*(it + 1) - *it))
			shortest = (*(it + 1) - *it);
	}
	return shortest;
}

int Span::longestSpan()
{
	if (_currLength < 1)
		throw listEmptyException();
	if (_currLength == 1)
		throw oneMemberListException();
	Span tmp = *this;
	sort(tmp._list.begin(), tmp._list.end());
	int min_val = tmp._list.front();
	int max_val = tmp._list.back();
	int longest = max_val - min_val;
	return longest;

}

void Span::multiAddNumber(unsigned int num)
{
	if (num + _currLength > _maxLength)
		throw tooManyNumbersException();
	for (unsigned int i = 0; i < num; i++)
	{
		int random = rand() % 1000; 
		addNumber(random);
	}
	

}