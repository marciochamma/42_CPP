/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:07:57 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/30 16:29:36 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>()
{
	std::cout <<"MutantStack: default constructor" <<std::endl;
	return ;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& copy) : std::stack<T, Container>(copy)
{
	std::cout <<"MutantStack: copy constructor" <<std::endl;
	return ;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void)
{
	std::cout <<"MutantStack: destructor" <<std::endl;
	return ;
}

template <typename T, typename Container>
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(const MutantStack& other)
{
	if (this != &other)
		std::stack<T, Container>::operator=(other);
	std::cout <<"MutantStack: assignment operator" <<std::endl;
	return (*this);
}


//----Iterator

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin()
{
	return (std::stack<T, Container>::c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end()
{
	return (std::stack<T, Container>::c.end());
}


//----Const Iterator

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::begin() const
{
	return (std::stack<T, Container>::c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::end() const
{
	return (std::stack<T, Container>::c.end());
}


//----Reverse Iterator

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator	MutantStack<T, Container>::rbegin()
{
	return (std::stack<T, Container>::c.rbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator	MutantStack<T, Container>::rend()
{
	return (std::stack<T, Container>::c.rend());
}


//----Const Reverse Iterator

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator	MutantStack<T, Container>::rbegin() const
{
	return (std::stack<T, Container>::c.rbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator	MutantStack<T, Container>::rend() const
{
	return (std::stack<T, Container>::c.rend());
}