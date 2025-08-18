#pragma once

#include <iostream>

template <typename Type>
void iter(Type *arrayAddress, int arrayLength, Type (*func)(Type const&))
{
	for (int i = 0; i < arrayLength; i++)
		arrayAddress[i] = func(arrayAddress[i]);
}

template <typename Type>
Type bitShift(Type const &param)
{
	return param << 1;
}

template <typename Type>
Type display(Type const &param)
{
	std::cout << param << std::endl ;
	return param;
}