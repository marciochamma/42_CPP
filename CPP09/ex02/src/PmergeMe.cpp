/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:49:32 by mchamma           #+#    #+#             */
/*   Updated: 2024/11/03 14:47:39 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Pme::Pme(void)
{
	// std::cout <<"Pme: default constructor" <<std::endl;
	return ;
}

Pme::Pme(const Pme& copy)
{
	this->_vector = copy._vector;
	this->_deque = copy._deque;
	// std::cout <<"Pme: copy constructor" <<std::endl;
	return ;
}

Pme&	Pme::operator=(const Pme& other)
{
	if (this != &other)
	{
		this->_vector = other._vector;
		this->_deque = other._deque;
		// this->_stack = other._stack;
	}
	// std::cout <<"Pme: assignment operator" <<std::endl;
	return (*this);
}

Pme::~Pme(void)
{
	// std::cout <<"Pme: destructor" <<std::endl;
	return ;
}

void	Pme::parseInput(int argc, char** argv)
{
	if (argc < 2)
		throw std::invalid_argument("Error: must have arguments.");
	
	for(int i = 1; i < argc; ++i)
	{
		std::string elem = argv[i];

		if (elem.size() == 0 || (elem[0] != '+' && !isdigit(elem[0])))
			throw std::invalid_argument("Error: all arguments must be positive integers.");

		for (size_t j = (elem[0] == '+' ? 1 : 0); j < elem.size(); ++j)
		{
			if (!isdigit(elem[j]))
				throw std::invalid_argument("Error: all arguments must be positive integers.");
		}

		double nbr = std::atof(elem.c_str());
		if (nbr <= 0 || nbr > 2147483647)
			throw std::invalid_argument("Error: all arguments must be positive integers.");
	
		int intNbr = static_cast<int>(nbr);
		if (std::find(this->_vector.begin(), this->_vector.end(), intNbr) != this->_vector.end())
			throw std::invalid_argument("Error: duplicate numbers are not allowed.");

		this->_vector.push_back(nbr);
		this->_deque.push_back(nbr);
	}
}

std::vector<int>&	Pme::getVector(void)
{
	return (this->_vector);
}

std::deque<int>&	Pme::getDeque(void)
{
	return (this->_deque);
}
