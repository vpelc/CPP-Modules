#include "PmergeMe.hpp"
#include "sort_utils.hpp"


PmergeMe::PmergeMe() : _prev_jacobsthal_nbr(0), _nbr_inserted_nbrs(0) {}

PmergeMe::PmergeMe(const PmergeMe& pm) { (void)pm; }

PmergeMe::~PmergeMe() {}


PmergeMe& PmergeMe::operator=(const PmergeMe& pm) { (void)pm; return *this;}


void PmergeMe::sort_vec(std::vector<int>& vec) { merge_insertion_sort<std::vector<int> >(vec, 1); }

void PmergeMe::sort_deque(std::deque<int>& deque) { merge_insertion_sort<std::deque<int> >(deque, 1); }

inline long _jacobsthal_number(long n) { return round((pow(2, n + 1) + pow(-1, n)) / 3); }
