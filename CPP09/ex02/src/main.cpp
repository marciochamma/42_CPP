/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:12:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/11/03 13:20:18 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	try
	{
		Pme sorter;
		sorter.parseInput(argc, argv);

		std::cout <<"Before: ";
		sorter.printContainer(sorter.getVector());

		int contSize = sorter.getDeque().size();
		double vecTime = fordJohnsonSort<std::vector<int>, std::vector<std::pair<int, int> > >(sorter.getVector());
		double deqTime = fordJohnsonSort<std::deque<int>, std::deque<std::pair<int, int> > >(sorter.getDeque());

		std::cout <<"After: ";
		sorter.printContainer(sorter.getDeque());

		std::cout <<"Time to process a range of " <<contSize <<" elements with std::vector<int> : ";
		std::cout <<std::fixed <<std::setprecision(5) <<vecTime <<" s" <<std::endl;

		std::cout <<"Time to process a range of " <<contSize <<" elements with std::deque<int> : ";
		std::cout <<std::fixed <<std::setprecision(5) <<deqTime <<" s" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
