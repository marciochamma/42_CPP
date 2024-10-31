/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:50:18 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/30 16:56:07 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->_N = 0;
	std::cout <<"Span: default constructor" <<std::endl;
	return ;
}

Span::Span(unsigned int N)
{
	this->_N = N;
	std::cout <<"Span: parameter constructor" <<std::endl;
	return ;
}

Span::Span(const Span& copy)
{
	this->_N = copy._N;
	this->_vector = copy._vector;
	std::cout <<"Span: copy constructor" <<std::endl;
	return ;
}

Span::~Span(void)
{
	std::cout <<"Span: destructor" <<std::endl;
	return ;
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_vector = other._vector;
	}
	std::cout <<"Span: assignment operator" <<std::endl;
	return (*this);
}

// -----------------------------------------

void	Span::addNumber(int nbr)
{
	if(this->_vector.size() < this->_N &&
		nbr >= std::numeric_limits<int>::min() &&
		nbr <= std::numeric_limits<int>::max())
		this->_vector.push_back(nbr);
	else
		throw std::overflow_error("Container is full");
}

void	Span::addMore(void)
{
	srand(time(NULL));

	while (this->_vector.size() < this->_N)
	{
		// int	nbr = (1 - (rand() % 2) * 2) * (rand() % 50000);
		int	nbr = (rand() % 50000);
		// if (std::find(this->_vector.begin(), this->_vector.end(), nbr) == this->_vector.end())
			this->_vector.push_back(nbr);
	}

}

int	Span::shortestSpan(void)
{
	if (this->_vector.size() < 2)
		throw std::out_of_range("Less than 2 elements, shortest span can't be found.");

	std::vector<int> temp = this->_vector;
	std::sort(temp.begin(), temp.end());

	std::vector<int>::iterator	it;
	int	shorter = std::numeric_limits<int>::max();

	for (it = temp.begin(); it < temp.end() - 1; it++)
	{
		int diff = *(it + 1) - *it;
		if (diff < shorter)
			shorter = diff;
	}
	return (shorter);
}

int	Span::longestSpan(void)
{
	if (this->_vector.size() < 2)
		throw std::out_of_range("Less than 2 elements, longest span can't be found.");

	std::vector<int> temp = this->_vector;
	std::sort(temp.begin(), temp.end());

	return (temp[temp.size() - 1] - temp[0]);
}	

// -----------------------------------------

unsigned int	Span::getN(void)
{
	return (this->_N);
}

void	Span::printContainer(void)
{
	if (this->_vector.empty())
		return ;

	std::vector<int>::iterator	it;
	for (it = this->_vector.begin(); it < this->_vector.end(); it++)
		std::cout <<*it <<" ";
	std::cout <<std::endl;
	return ;
}