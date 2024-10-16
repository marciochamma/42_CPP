/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:28:00 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 12:51:09 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout <<"Dog: default constructor" <<std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(const Dog& copy)
{
	std::cout <<"Dog: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

Dog::~Dog(void)
{
	std::cout <<"Dog: destructor" <<std::endl;
	return ;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout <<"Sound of Dog: woof" <<std::endl;
	return ;
}