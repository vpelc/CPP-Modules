#pragma once

#include <iostream>
#include <list>
#include <stack>

template <typename Type>
class MutantStack : public std::stack<Type>
{
  public:
						MutantStack();
						MutantStack(const MutantStack &src);
						~MutantStack();

	MutantStack<Type>	&operator=(MutantStack const  &src);

	typedef typename std::stack<Type>::container_type::iterator iterator;
	typedef typename std::stack<Type>::container_type::const_iterator const_iterator;
	iterator 			begin();
	iterator			end();
	const_iterator 			begin()	const;
	const_iterator			end()	const;

};

template <typename Type>
MutantStack<Type>::MutantStack(){}

template <typename Type>
MutantStack<Type>::MutantStack(const MutantStack<Type> &src)
{
	*this = src;
}
template <typename Type>
MutantStack<Type>::~MutantStack(){}

template <typename Type>
MutantStack<Type> &MutantStack<Type>::operator=(MutantStack const &src)
{
	if (this != *src)
		*this = src;
	return this;
}

template <typename Type>
typename MutantStack<Type>::iterator MutantStack<Type>::begin()
{
	return (this->c.begin());
}

template <typename Type>
typename MutantStack<Type>::iterator MutantStack<Type>::end()
{
	return (this->c.end());
}

template <typename Type>
typename MutantStack<Type>::const_iterator MutantStack<Type>::begin() const
{
	return (this->c.begin());
}

template <typename Type>
typename MutantStack<Type>::const_iterator MutantStack<Type>::end() const
{
	return (this->c.end());
}

