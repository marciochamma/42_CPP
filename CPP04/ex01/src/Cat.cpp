/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:13:15 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/13 00:51:58 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout <<"Cat: default constructor" <<std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat& copy)
{
	std::cout <<"Cat: copy constructor" <<std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	return ;
}

Cat::~Cat(void)
{
	std::cout <<"Cat: destructor" <<std::endl;
	delete this->_brain;
	return ;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout <<"Cat: operator= overload" <<std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}


void	Cat::makeSound(void) const
{
	std::cout <<"Sound of Cat: meow" <<std::endl;
	return ;
}

std::string	Cat::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}

void	Cat::setIdea(int i, const std::string newIdea)
{
	this->_brain->setIdea(i, newIdea);
	return ;
}