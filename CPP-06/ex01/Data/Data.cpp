#include "Data.hpp"

static int default_int = 10;

Data::Data() : data_int(default_int){}

Data::Data(Data &copy) : data_int(copy.get_data()){}

Data::~Data() {}

Data &Data::operator=(Data &src)
{
	if (this != &src)
		data_int = src.get_data();
	return *this;
}

int Data::get_data() { return this->data_int; }