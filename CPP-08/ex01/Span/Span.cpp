#include "Span.hpp"

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
	for(std::vector<int>::iterator it = _list.begin(); it != _list.end(); ++it)
	{
		for (std::vector<int>::iterator jt = it + 1; jt != _list.end(); ++jt)
		{
			if (shortest > sqrt(pow((*it - *jt), 2)))
				shortest = sqrt(pow((*it - *jt), 2));
		}
	}
	return shortest;
}

int Span::longestSpan()
{
	int min = INT_MAX;
	int max = INT_MIN;
	if (_currLength < 1)
		throw listEmptyException();
	if (_currLength == 1)
		throw oneMemberListException();
	for(std::vector<int>::iterator it = _list.begin(); it != _list.end(); ++it)
	{
		if (min > *it)
		min = *it;
	}
	for(std::vector<int>::iterator it = _list.begin(); it != _list.end(); ++it)
	{
		if (max < *it)
		max = *it;
	}
	return max - min;

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