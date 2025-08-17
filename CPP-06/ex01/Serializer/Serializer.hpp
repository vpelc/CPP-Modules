#pragma once

#include <iostream>
#include <string>
#include <stdint.h>
#include "../Data/Data.hpp"

class Serializer
{
	private :
							Serializer();
							Serializer(Serializer &copy);
							~Serializer();

	public :
		Serializer			&operator=(Serializer &src);
		static uintptr_t	serialize(Data *ptr);
    	static Data 		*deserialize(uintptr_t raw);
};
