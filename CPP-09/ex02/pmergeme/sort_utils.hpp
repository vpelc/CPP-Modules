#pragma once

#include "PmergeMe.hpp"

template <typename T> bool PmergeMe::comp(T next_val, T curr_val)
{
	PmergeMe::nbr_of_comps++;
	return *next_val < *curr_val;
}

template <typename T> T next(T it, int steps)
{
	std::advance(it, steps);
	return it;
}

template <typename T> void PmergeMe::swap_pair(T it, int nbr_elem)
{
	T start = next(it, -nbr_elem + 1);
	T end = next(start, nbr_elem);
	while (start != end)
	{
		std::iter_swap(start, next(start, nbr_elem));
		start++;
	}
}

template <typename T> void PmergeMe::div_to_pair_and_sort(int nbr_elem, int nbr_group)
{
	typedef typename T::iterator Iterator;

	Iterator last = next(container.begin(), nbr_elem * (nbr_group));

	for (Iterator it = container.begin(); 
		it != next(last, -((nbr_group % 2) * nbr_elem); std::advance(it,  2 * nbr_elem)))
	{
		Iterator this_pair = next(it, nbr_elem - 1);
		Iterator next_pair = next(it, nbr_elem * 2 - 1);
		if (comp(next_pair, this_pair))
			swap_pair(this_pair, nbr_elem);
	}
}

template <typename T> void PmergeMe::merge_insertion_sort(T& container, int nbr_elem)
{
	typedef typename T::iterator Iterator;

	int nbr_group = container.size() / nbr_elem;
	if (nbr_group < 2)
		return ;
	
	div_to_pair_and_sort(nbr_elem, nbr_group);

	merge_insertion_sort(container, nbr_elem * 2);

	std::vector<Iterator> main;
	std::vector<Iterator> pend;

	main.insert(main.end(), next(container.begin(), nbr_elem - 1));
	main.insert(main.end(), next(container.begin(), nbr_elem * 2 - 1));

	for (int i = 4; i <= nbr_group; i += 2)
	{
		pend.insert(pend.end(), next(container.begin(), nbr_elem * (i - 1) - 1));
		main.insert(main.end(), next(container.begin(), nbr_elem * i - 1));
	}
	if (nbr_group % 2 == 1)
		pend.insert(pend.end(), next(end, nbr_elem - 1));
}