/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:12:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/30 16:30:03 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <list>
#include <deque>

int	main(void)
{
	std::cout <<std::endl;
	{
		std::cout <<"--> check default constructor\n";
		MutantStack<int> mstack;
		
		mstack.push(0);
		mstack.push(1);
		mstack.push(2);
		
		std::cout <<"top: " <<mstack.top() <<std::endl;
		std::cout <<"size: " <<mstack.size() <<std::endl;
	}

	std::cout <<std::endl;
	{
		std::cout <<"--> check copy constructor\n";
		MutantStack<int> mstack;
			
		mstack.push(10);
		mstack.push(11);
		mstack.push(12);

		MutantStack<int> mstackCopy(mstack);
		std::cout <<"top: " <<mstackCopy.top() <<std::endl;
		std::cout <<"size: " <<mstackCopy.size() <<std::endl;
	}

	std::cout <<std::endl;
	{
		std::cout <<"--> check assigment operator\n";
		MutantStack<int> mstack;

		mstack.push(20);
		mstack.push(21);
		mstack.push(22);

		MutantStack<int> mstackOther;
		mstackOther = mstack;
		
		std::cout <<"top: " <<mstackOther.top() <<std::endl;
		std::cout <<"size: " <<mstackOther.size() <<std::endl;
	}

	std::cout <<std::endl;
	{
		std::cout <<"--> check stack copy\n";
		MutantStack<int> mstack;
		mstack.push(30);
		mstack.push(31);
		mstack.push(32);

		std::stack<int> s(mstack);
		std::cout <<s.top() <<std::endl;
		std::cout <<s.size() <<std::endl;
	}
	
	std::cout <<"\n==================================\n";

	std::cout <<std::endl;
	{
		std::cout <<"--> Subject\n";
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		// return 0;
	}

	std::cout <<"\n==================================\n";

	std::cout <<std::endl;
	{
		std::cout <<"MUTANT STACK + DEQUE ( with iterator )\n";
		MutantStack<int> mstack; // deque by default
		mstack.push(0);
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout <<*it <<" ";
			++it;
		}
		std::cout <<std::endl;

		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		while (rit != rite)
		{
			std::cout <<*rit <<" ";
			++rit;
		}
		std::cout <<std::endl;
	}

	std::cout <<std::endl;
	{
		std::cout <<"MUTANT STACK + LIST ( with iterator )\n";
		MutantStack<int, std::list<int> > mstack;
		mstack.push(0);
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);

		MutantStack<int, std::list<int> >::iterator it = mstack.begin();
		MutantStack<int, std::list<int> >::iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout <<*it <<" ";
			++it;
		}
		std::cout <<std::endl;

		MutantStack<int, std::list<int> >::reverse_iterator rit = mstack.rbegin();
		MutantStack<int, std::list<int> >::reverse_iterator rite = mstack.rend();
		while (rit != rite)
		{
			std::cout <<*rit <<" ";
			++rit;
		}
		std::cout <<std::endl;
	}

	std::cout <<std::endl;
	{
		std::cout <<"MUTANT STACK + VECTOR ( with iterator )\n";
		MutantStack<int, std::vector<int> > mstack;
		mstack.push(0);
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);

		MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
		MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout <<*it <<" ";
			++it;
		}
		std::cout <<std::endl;

		MutantStack<int, std::vector<int> >::reverse_iterator rit = mstack.rbegin();
		MutantStack<int, std::vector<int> >::reverse_iterator rite = mstack.rend();
		while (rit != rite)
		{
			std::cout <<*rit <<" ";
			++rit;
		}
		std::cout <<std::endl;
	}

	std::cout <<std::endl;
	return (0);
}
