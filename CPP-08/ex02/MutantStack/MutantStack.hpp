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
	iterator 			begin();
	iterator			end();

};

template <typename Type>
MutantStack<Type>::MutantStack(){}

template <typename Type>
MutantStack<Type>::MutantStack(const MutantStack<Type> &src)
{
	(void)src;
}
template <typename Type>
MutantStack<Type>::~MutantStack(){}

template <typename Type>
MutantStack<Type> &MutantStack<Type>::operator=(MutantStack const &src)
{
	if (this != *src)
		(void)src;
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

