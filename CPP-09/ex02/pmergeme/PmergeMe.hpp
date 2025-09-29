#pragma once 

#include <vector>
#include <deque>
#include <cmath>
class PmergeMe{

	private :
		int				_comp_count;

		template <typename T> void		merge_insertion_sort(T& container, int nbr_elem);
		template <typename T> void		swap_pair(T it, int group_size);
		template <typename T> bool		comp(T next_val, T curr_val);
		template <typename T> void		div_to_pair_and_sort(int nbr_elem, int nbr_group);

	public : 
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		~PmergeMe();

		PmergeMe			&operator=(PmergeMe const &src);

		void				sort_vec(std::vector<int>& vec);
		void				sort_deque(std::deque<int>& deque);

};

inline long _jacobsthal_number(long n);

