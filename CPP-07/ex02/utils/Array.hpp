#pragma once

#include <exception>

template <typename Type>
class Array {

	private :
		Type 			*T;
		int				_size;

	public :
						Array();
						Array(unsigned int n);
						Array(const Array<Type>& copy);
						~Array();
		Array<Type>		&operator=(Array<Type> &other);
		Type			&operator[](int index);
		int				size() const;

		class InvalidIndexException : public std::exception
		{
			public :
				const char* what() const throw();	
		};
};


template <typename Type>
Array<Type>::Array()
{
	T = new Type[1];
    _size = 1;
}


template <typename Type>
Array<Type>::Array(unsigned int s)
{
    T = new Type[s];
	_size = s;
    for (unsigned int i = 0; i < s; i++)
        T[i] = 0;
}


template <typename Type>
Array<Type>::Array(Array const &src) : T(src.T)
{
    *this = src;
}


template <typename Type>
Array<Type>::~Array()
{
    delete[] T;
}


template <typename Type>
int Array<Type>::size() const
{
    return _size;
}


template <typename Type>
Array<Type> &Array<Type>::operator=(Array<Type> &other)
{
    if (this != &other)
    {
        delete[] this->T;
        this->T = new Type[other.size()];
        for (int i = 0; i < other.size(); i++)
            this->T[i] = other.T[i];
    }
    return (*this);
}


template <typename Type>
Type &Array<Type>::operator[](int index)
{
    if (index >= _size || index < 0)
        throw Array::InvalidIndexException();
    return (this->T[index]);
}


template <typename Type>
const char *Array<Type>::InvalidIndexException::what() const throw()
{
    return ("Index not valid");
}