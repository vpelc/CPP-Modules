#include "Span.hpp"

Span::Span() : _maxLength(0), _currLength(0) {}

Span::Span(unsigned int n) : _maxLength(n), _currLength(0) {}

Span::Span(const Span &src) : _maxLength(src._maxLength)
	, _currLength(src._currLength), _list(src._list) {}

Span::~Span() {}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_list = src._list;
		_maxLength = src._maxLength;
		_currLength = src._currLength;
	}
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
	for(std::vector<int>::iterator it = _list.begin(); it != _list.end(); ++it)
	{
		if (shortest > sqrt(pow((*it - (*it + 1)), 2)))
			shortest = sqrt(pow((*it - (*it + 1)), 2));
	}
	return shortest;
}

int Span::longestSpan()
{
	int longest = INT_MIN;
	for(std::vector<int>::iterator it = _list.begin(); it != _list.end(); ++it)
	{
		if (longest < sqrt(pow((*it - (*it + 1)), 2)))
			longest = sqrt(pow((*it - (*it + 1)), 2));
	}
	return longest;
}

void Span::multiAddNumber(unsigned int num)
{
	// if (num <= 0)
	// 	throw negativeOrZeroNumException();
	if (num + _currLength > _maxLength)
		throw tooManyNumbersException();
	for (unsigned int i = 0; i < num; i++)
	{
		srand(time(0));
		int random = rand() % 1000; 
		addNumber(random);
	}
	

}