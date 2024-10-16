/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:06:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 17:23:03 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout <<"Brain: default constructor" <<std::endl;
	return ;
}

Brain::Brain(const Brain& copy)
{
	std::cout <<"Brain: copy constructor" <<std::endl;
	for (int i =0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return ;
}

Brain::~Brain(void)
{
	std::cout <<"Brain: destructor" <<std::endl;
	return ;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}

void	Brain::setIdea(int i, std::string newIdea)
{
	this->_ideas[i] = newIdea;
	return ;
}