#include "pmergeme/PmergeMe.hpp"
#include "pmergeme/sort_utils.hpp"
#include "checks/checks.hpp"
#include "utils/utils.hpp"


#include <iostream>
#include <iomanip>



int main(int argc, char** argv)
{
	PmergeMe merge;

	try
	{
		check_arg(argc, argv);

		clock_t startVecTime = clock();
		std::vector<int> vec = fill_vector(argc, argv);
		merge.sort_vec(vec);
		clock_t endVecTime = clock();
		double timeElapsedVec = static_cast<double>(endVecTime - startVecTime) / CLOCKS_PER_SEC;

		clock_t startDecTime = clock();
		std::deque<int> deque = fill_deque(argc, argv);
		merge.sort_deque(deque);
		clock_t endDecTime = clock();
		double timeElapsedDeq = static_cast<double>(endDecTime - startDecTime) / CLOCKS_PER_SEC;

		// if (!is_container_sorted(vec) || (int)vec.size() != (argc - 1))
		// 	throw std::invalid_argument ("vector was not sorted properly");
		if (!is_container_sorted(deque) || (int)deque.size() != (argc - 1))
			throw std::invalid_argument ("deque was not sorted properly");

		std::cout << "Before: " << before_sort(argc, argv) << "\n";
		std::cout << "After : " << after_sort(vec) << "\n";
		std::cout << "Time to process a range of " << vec.size()
				<< " elements with std::vector: " << std::fixed << std::setprecision(7)
				<< timeElapsedVec << "s\n";
		std::cout << "Time to process a range of " << vec.size()
				<< " elements with std::deque:  " << std::fixed << std::setprecision(7)
				<< timeElapsedDeq << "s\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << "\n";
	}
	return 0;
}