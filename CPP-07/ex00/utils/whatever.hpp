#pragma once

template <typename Type>
void swap( Type &x, Type &y)
{
	Type tmp = x;
	x = y;
	y = tmp;
}

template <typename Type>
Type min( Type &x, Type &y)
{
	return (x >= y) ? y : x;
}

template <typename Type>
Type max( Type &x, Type &y)
{
	return (x <= y) ? y : x;
}