#include "utils/iter.hpp"

int main()
{
	int tab[] = {-4, 9, 17, -32, 128, 0};
	int length = sizeof(tab) / sizeof(tab[0]);
	
	iter(tab, length, bitShift<int>);

	iter(tab, length, display<int>);
	

	return 0;
}