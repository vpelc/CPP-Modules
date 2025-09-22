#include "BitcoinExchange/BitcoinExchange.hpp"
#include "checks/checks.hpp"

int main(int argc, char *argv[])
{
	try {

		check_arg(argc, argv);
		BitcoinExchange b1(argv);
		
		b1.search_rate_for_value();
	}
	catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
	}

}