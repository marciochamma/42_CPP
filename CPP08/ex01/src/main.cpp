/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:12:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/30 16:58:20 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	// Subject's elements
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		sp.printContainer();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.printContainer();
	}
	std::cout <<std::endl;

	// 10 elements
	try
	{
		Span	test0(10);
		Span	test1(test0);
		std::vector<int>::iterator	it;
		
		test1.addNumber(7);
		test1.addMore();
		test1.printContainer();

		std::cout <<test1.shortestSpan() <<std::endl;
		std::cout <<test1.longestSpan() <<std::endl;

		test1.printContainer();
	}
	catch(const std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	// 10.001 elements
	try
	{
		Span	test0(10001);
		Span	test1;

		test1 = test0;
		std::vector<int>::iterator	it;
		
		test1.addMore();

		std::cout <<test1.shortestSpan() <<std::endl;
		std::cout <<test1.longestSpan() <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;
}
