#pragma once

#include <iostream>

template <typename T1, typename T2>
void iter(T1 *arrayAddress, const int arrayLength, T2 (*func)(T1 const&))
{
	for (int i = 0; i < arrayLength; i++)
		func(arrayAddress[i]);
}

template <typename T1, typename T2>
void iter(T1 *arrayAddress, const int arrayLength, T2 (*func)(T1 &))
{
	for (int i = 0; i < arrayLength; i++)
		func(arrayAddress[i]);
}

template <typename Type>
Type bitShift(Type const &param)
{
	return param << 1;
}

template <typename Type>
void display(Type const &param)
{
	std::cout << param << std::endl ;
}