/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:01:09 by mchamma           #+#    #+#             */
/*   Updated: 2024/11/03 14:45:57 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <deque>

class Pme
{
private:
	std::vector<int> _vector;
	std::deque<int> _deque;	

public:
	Pme(void); // default constructor
	Pme(const Pme& copy); // copy constructor
	Pme&	operator=(const Pme& other); // assignment operator
	~Pme(void); // destructor

	void	parseInput(int argc, char** argv);
	std::vector<int>&	getVector(void);
	std::deque<int>&	getDeque(void);
	
	template <typename Container>
	void	printContainer(Container& box) const
	{
		for (typename Container::const_iterator it = box.begin(); it != box.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	}

};

template<typename Container>
bool	isSorted(const Container& box)
{
	for (size_t i = 1; i < box.size(); ++i)
	{
		if (box[i - 1] > box[i])
			return (false);
	}
	return (true);
}

template<typename Container, typename PairContainer>
double	fordJohnsonSort(Container& box)
{
	std::clock_t start = std::clock();
	
	if (box.size() < 2)
		return 0.0;
	
	PairContainer pairs;

	for (size_t i = 0; i < box.size() - 1; i += 2)
	{
		if (box[i] > box[i + 1])
			pairs.push_back(std::make_pair(box[i], box[i + 1]));
		else
			pairs.push_back(std::make_pair(box[i + 1], box[i]));
	}

	int oddElement;
	if (box.size() % 2 != 0)
		oddElement = box.back();

	Container boxSorted;
	for (size_t i = 0; i < pairs.size(); ++i)
		boxSorted.push_back(pairs[i].first);

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		typename Container::iterator pos = std::upper_bound(boxSorted.begin(), boxSorted.end(), pairs[i].second);	
		boxSorted.insert(pos, pairs[i].second);
	}

	if (box.size() % 2 != 0)
	{
		typename Container::iterator pos = std::upper_bound(boxSorted.begin(), boxSorted.end(), oddElement);
		boxSorted.insert(pos, oddElement);
	}	

	// boxSorted.erase(std::unique(boxSorted.begin(), boxSorted.end()), boxSorted.end());
	
	box = boxSorted;
	
	if (!isSorted(box))
		fordJohnsonSort<Container, PairContainer>(box);

	std::clock_t end = std::clock();
	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	return (duration);
	
}

#endif