/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:12:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/30 11:48:55 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int	main(void)
{
	//container = vector
	{
		std::vector<int>	vector;
		std::vector<int>::iterator	it;
		for (int i = 0; i < 5; i++)
			vector.push_back(i);
		std::cout <<"vector: ";
		for (it = vector.begin(); it != vector.end(); it++)
			std::cout <<*it <<" ";
		std::cout <<std::endl;
		try // find
		{
			int	m = 0;
			it = easyfind(vector, m);
			std::cout <<*it <<std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr <<e.what() <<std::endl;
		}
		
		try // not find
		{
			int	m = 5;
			it = easyfind(vector, m);
			std::cout <<*it <<std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr <<e.what() <<std::endl;
		}
	}
	std::cout <<std::endl;

	//container = list
	{
		std::list<int>	list;
		std::list<int>::iterator	it;
		for (int i = 0; i < 5; i++)
			list.push_front(i);
		std::cout <<"list: ";
		for (it = list.begin(); it != list.end(); it++)
			std::cout <<*it <<" ";
		std::cout <<std::endl;
		try // find
		{
			int	m = 0;
			it = easyfind(list, m);
			std::cout <<*it <<std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr <<e.what() <<std::endl;
		}

		try // not find
		{
			int	m = 2147483647;
			it = easyfind(list, m);
			std::cout <<*it <<std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr <<e.what() <<std::endl;
		}
	}
	std::cout <<std::endl;

	//container = deque
	{
		std::deque<int>	deque;
		std::deque<int>::iterator	it;
		for (int i = 0; i < 5; i++)
			deque.push_front(i);
		std::cout <<"deque: ";
		for (it = deque.begin(); it != deque.end(); it++)
			std::cout <<*it <<" ";
		std::cout <<std::endl;
		try
		{
			int	m = 2;
			it = easyfind(deque, m);
			std::cout <<*it <<std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr <<e.what() <<std::endl;
		}

		try // not find
		{
			int	m = -1;
			it = easyfind(deque, m);
			std::cout <<*it <<std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr <<e.what() <<std::endl;
		}
	}
	std::cout <<std::endl;


// vector: 
// - elements are stored contiguously
// - slow insertion and deletion in the beggining or middle and fast in the end
// - used to random access or add elements in the end.

// list:
// - A doubly linked list
// - slow random access because elements are not contiguous
// - fast insetion and deletion anywhere in the list
// - use if you need to insert/delete frequently at arbitrary positions

// deque:
// - A double-ended queue
// - slow insertion/deletion in the middle
// - fast insertion/deletion at both ends
// - use if you need fast access and modifications at both ends

}