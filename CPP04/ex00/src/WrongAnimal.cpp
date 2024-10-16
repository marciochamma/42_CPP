/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:59 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 12:51:21 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void)
{
	std::cout <<"WrongAnimal: default constructor" <<std::endl;
	this->_type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout <<"WrongAnimal: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout <<"WrongAnimal: destructor" <<std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout <<"Sound of WrongAnimal: <void>" <<std::endl;
	return ;
}

