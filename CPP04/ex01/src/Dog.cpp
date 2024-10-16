/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:28:00 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/13 00:51:35 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout <<"Dog: default constructor" <<std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog& copy)
{
	std::cout <<"Dog: copy constructor" <<std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	return ;
}

Dog::~Dog(void)
{
	std::cout <<"Dog: destructor" <<std::endl;
	delete this->_brain;
	return ;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout <<"Dog: operator= overload" <<std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout <<"Sound of Dog: woof" <<std::endl;
	return ;
}

std::string	Dog::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}

void	Dog::setIdea(int i, const std::string newIdea)
{
	this->_brain->setIdea(i, newIdea);
	return ;
}