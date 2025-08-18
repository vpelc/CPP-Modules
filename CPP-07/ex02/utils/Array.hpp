#pragma once

template <typename Type>
class Array {

	private :
		Type 		*T;

	public :
					Array();
					Array(unsigned int n);
					Array(const Array& copy);
		Array		&operator=(Array &other);
		T			&operator[](int index);
		int			size();
		
};