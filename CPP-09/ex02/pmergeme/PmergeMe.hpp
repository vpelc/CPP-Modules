#pragma once 

#include <vector>
#include <deque>
#include <cmath>
#include <algorithm>


class PmergeMe{

	private :
		int				_prev_jacobsthal_nbr;
		int				_nbr_inserted_nbrs;

		template <typename T> void		merge_insertion_sort(T& container, int nbr_elem);
		template <typename T> void		swap_pair(T it, int group_size);
		template <typename T> void		div_to_pair_and_sort(T& container, int nbr_elem, int nbr_group);
		template <typename T> void		fill_main_pend (T& container, int nbr_elem, int nbr_group,
											std::vector<typename T::iterator> &main, 
											std::vector<typename T::iterator> &pend, bool nbr_group_is_odd);
		template <typename T> void		jacobsthal_nbr_insertion(std::vector<typename T::iterator>& main,
											std::vector<typename T::iterator>& pend);
		template <typename T> void		reverse_insertion(std::vector<typename T::iterator>& main,
											std::vector<typename T::iterator>& pend, bool hasOdd);
		template <typename T> void		insert_jacobsthal_block(std::vector<typename T::iterator>& main,
	 										std::vector<typename T::iterator>& pend,
											int currentJacobsthal, int jacobsthalRange);
		template <typename T> void		copy_to_original(T& container, 
											const std::vector<typename T::iterator>& main, int currentRecPairSize);

	public : 
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		~PmergeMe();

		PmergeMe			&operator=(PmergeMe const &src);

		void				sort_vec(std::vector<int>& vec);
		void				sort_deque(std::deque<int>& deque);

};

inline long _jacobsthal_number(long n);

