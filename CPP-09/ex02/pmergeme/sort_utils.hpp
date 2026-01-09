#pragma once

#include "PmergeMe.hpp"

template <typename T> bool comp(T next_val, T curr_val)
{
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

template <typename T> bool is_container_sorted(const T& container)
{
    if (container.size() == 1)
        return true;
    typename T::const_iterator end = container.end();
    std::advance(end, -1);
    for (typename T::const_iterator it = container.begin(); it != end; it++)
    {
        typename T::const_iterator next = it;
        std::advance(next, 1);
        if (*it > *next)
            return false;
    }
    return true;
}

template <typename T> void PmergeMe::div_to_pair_and_sort(T& container, int nbr_elem, int nbr_group)
{
	typedef typename T::iterator Iterator;

	Iterator last = next(container.begin(), nbr_elem * (nbr_group));

	for (Iterator it = container.begin(); 
		it != next(last, -((nbr_group % 2) * nbr_elem)); std::advance(it,  2 * nbr_elem))
	{
		Iterator this_pair = next(it, nbr_elem - 1);
		Iterator next_pair = next(it, nbr_elem * 2 - 1);
		if (comp(next_pair, this_pair))
			swap_pair(this_pair, nbr_elem);
	}
}

template <typename T> void PmergeMe::fill_main_pend( T& container, int nbr_elem, int nbr_group,
	std::vector<typename T::iterator> &main, std::vector<typename T::iterator> &pend, bool nbr_group_is_odd)
{
	typedef typename T::iterator Iterator;

	Iterator last = next(container.begin(), nbr_elem * (nbr_group));
 	Iterator end = next(last, -(nbr_group_is_odd * nbr_elem));

	main.insert(main.end(), next(container.begin(), nbr_elem - 1));
	main.insert(main.end(), next(container.begin(), nbr_elem * 2 - 1));

	for (int i = 4; i <= nbr_group; i += 2)
	{
		pend.insert(pend.end(), next(container.begin(), nbr_elem * (i - 1) - 1));
		main.insert(main.end(), next(container.begin(), nbr_elem * i - 1));
	}
	if (nbr_group_is_odd)
		pend.insert(pend.end(), next(end, nbr_elem - 1));
}

template <typename T> void PmergeMe::jacobsthal_nbr_insertion(std::vector<typename T::iterator>& main,
	std::vector<typename T::iterator>& pend)
{

	for (int iteration = 2;; ++iteration)
	{
		int currentJacobsthal = _jacobsthal_number(iteration);
		int jacobsthalRange = currentJacobsthal - _prev_jacobsthal_nbr;

		if (jacobsthalRange > static_cast<int>(pend.size()))
			break;

		insert_jacobsthal_block<T>(main, pend, currentJacobsthal, jacobsthalRange);

		_prev_jacobsthal_nbr = currentJacobsthal;
		_nbr_inserted_nbrs += jacobsthalRange;
	}
}

template <typename T> void PmergeMe::insert_jacobsthal_block(std::vector<typename T::iterator>& main,
	 std::vector<typename T::iterator>& pend, int currentJacobsthal, int jacobsthalRange)
{
	typedef typename T::iterator Iterator;
	int boundaryOffset = 0;
	int loopCount = jacobsthalRange;

	typename std::vector<Iterator>::iterator pend_it =
		next(pend.begin(), jacobsthalRange - 1);
	int boundPos = std:: min(currentJacobsthal + _nbr_inserted_nbrs, 
		static_cast<int>(main.size()));
	typename std::vector<Iterator>::iterator bound_it =
		next(main.begin(), boundPos);

	while (loopCount > 0)
	{
		if (bound_it == main.end() && !main.empty())
			bound_it--;
		typename std::vector<Iterator>::iterator insert_pos =
			std::upper_bound(main.begin(), bound_it, *pend_it, comp<Iterator>);
		typename std::vector<Iterator>::iterator insertedAt = main.insert(insert_pos, *pend_it);

		--loopCount;
		pend_it = pend.erase(pend_it);
		std::advance(pend_it, -1);

		boundaryOffset += (insertedAt - main.begin()) == currentJacobsthal + _nbr_inserted_nbrs;
		boundPos = std:: min(currentJacobsthal + _nbr_inserted_nbrs - boundaryOffset, 
			static_cast<int>(main.size()));
		bound_it = next(main.begin(), boundPos);
	}
}



template <typename T> void PmergeMe::reverse_insertion(std::vector<typename T::iterator>& main,
		std::vector<typename T::iterator>& pend, bool odd_nbr_group)
{
	typedef typename T::iterator Iterator;

	for (ssize_t index = static_cast<ssize_t>(pend.size()) - 1; index >= 0; --index)
	{
		typename std::vector<Iterator>::iterator pend_it = next(pend.begin(), index);
		typename std::vector<Iterator>::iterator bound_it =
			next(main.begin(), main.size() - pend.size() + index + (odd_nbr_group));
		typename std::vector<Iterator>::iterator insert_pos =
			std::upper_bound(main.begin(), bound_it, *pend_it, comp<Iterator>);
		main.insert(insert_pos, *pend_it);
	}
}

template <typename T> void PmergeMe::copy_to_original(T& container, 
		const std::vector<typename T::iterator>& main, int nbr_elem)
{
    typedef typename T::iterator Iterator;

    std::vector<int> tempCopy;
    tempCopy.reserve(container.size());

    typename std::vector<typename T::iterator>::const_iterator mainIt;
    for (mainIt = main.begin(); mainIt != main.end(); ++mainIt)
    {
        for (int offset = 0; offset < nbr_elem; ++offset)
        {
            Iterator pairStart = *mainIt;
            std::advance(pairStart, -nbr_elem + offset + 1);
            tempCopy.insert(tempCopy.end(), *pairStart);
        }
    }

    Iterator containerIt = container.begin();
    std::vector<int>::iterator copyIt = tempCopy.begin();
    while (copyIt != tempCopy.end())
    {
        *containerIt = *copyIt;
        ++containerIt;
        ++copyIt;
    }
}

template <typename T> void PmergeMe::merge_insertion_sort(T& container, int nbr_elem)
{
	typedef typename T::iterator Iterator;

	int nbr_group = container.size() / nbr_elem;
	if (nbr_group < 2)
		return ;
	
	bool nbr_group_is_odd = nbr_group % 2 == 1;

	div_to_pair_and_sort(container, nbr_elem, nbr_group);

	merge_insertion_sort(container, nbr_elem * 2);

	std::vector<Iterator> main;
	std::vector<Iterator> pend;

	fill_main_pend(container, nbr_elem, nbr_group, main, pend, nbr_group_is_odd);

	jacobsthal_nbr_insertion<T>(main, pend);

	reverse_insertion<T>(main, pend, nbr_group_is_odd);

	copy_to_original(container, main, nbr_elem);
}