#include "utils/utils.hpp"

int main()
{
	Base *some_ptr = generate();
	Base *other_ptr = generate();

	std::cout << "---" << std::endl;
	identify(some_ptr);
	std::cout << "---" << std::endl;
	identify(*some_ptr);
	std::cout << "---" << std::endl;
	identify(*other_ptr);

	delete some_ptr;
	delete other_ptr;

	return 0;
}
