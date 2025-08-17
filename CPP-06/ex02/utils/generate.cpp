#include "utils.hpp"
#include <ctime>


Base *generate(void)
{
	Base *ptr;

	srand(time(0));
	int random = (rand() % 3) + 1;
	switch (random)
	{
		case 1:
			ptr = new A;
			break;
		
		case 2:
			ptr = new B;
			break;
		
		case 3:
			ptr = new C;
			break;
		
		default:
			ptr = NULL;
			break;
	}
	return ptr;
}