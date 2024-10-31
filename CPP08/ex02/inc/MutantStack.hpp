/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:01:09 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/30 16:28:48 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTESTACK_HPP
# define MUTANTESTACK_HPP

#include <iostream>
#include <sstream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack(void); // default constructor
	MutantStack(const MutantStack& copy); // copy constructor
	~MutantStack(void); // destructor
	MutantStack&	operator=(const MutantStack& other); // assignment operator

	typedef typename std::stack<T, Container>::container_type::iterator	iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator	const_iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator	reverse_iterator;
	typedef typename std::stack<T, Container>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator	begin();
	iterator	end();
	const_iterator	begin() const;
	const_iterator	end() const;
	
	reverse_iterator	rbegin();
	reverse_iterator	rend();
	const_reverse_iterator	rbegin() const;
	const_reverse_iterator	rend() const;
};

#include "MutantStack.tpp"

#endif