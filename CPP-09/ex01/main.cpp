#include "RPN/RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	try{
		RPN new_calc;
		check_nb_arg(argc);
		new_calc.parse(argv[1]);

		std::cout << new_calc.get_stack_top() << std::endl;
	}
	catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
	}
}