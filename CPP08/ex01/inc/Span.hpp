/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:01:09 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/30 14:38:26 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits> // for numeric_limits
#include <algorithm> // for find, sort
#include <cstdlib> // for srand(), rand()
#include <ctime> // for time()

class Span
{
	private:
	std::vector<int>	_vector;
	unsigned int		_N;

	public:
	Span(void); // default parameter
	Span(unsigned int N); // parameter constructor
	Span(const Span& copy); // copy constructor
	~Span(void); // destructor
	Span& operator=(const Span& other); // assignment operator

	void			addNumber(int nbr);
	void			addMore(void);
	int				shortestSpan(void);
	int				longestSpan(void);

	unsigned int	getN(void);
	void			printContainer(void);
};

#endif