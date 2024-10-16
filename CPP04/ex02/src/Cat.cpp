/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:13:15 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 12:51:04 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout <<"Cat: default constructor" <<std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat& copy)
{
	std::cout <<"Cat: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

Cat::~Cat(void)
{
	std::cout <<"Cat: destructor" <<std::endl;
	return ;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout <<"Sound of Cat: meow" <<std::endl;
	return ;
}