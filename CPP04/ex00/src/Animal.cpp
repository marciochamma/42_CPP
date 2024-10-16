/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:05:15 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 12:50:58 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal(void)
{
	std::cout <<"Animal: default constructor" <<std::endl;
	this->_type = "Animal";
	return ;
}

Animal::Animal(const Animal& copy)
{
	std::cout <<"Animal: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

Animal::~Animal(void)
{
	std::cout <<"Animal: destructor" <<std::endl;
	return ;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout <<"Sound of Animal: <void>" <<std::endl;
	return ;
}
