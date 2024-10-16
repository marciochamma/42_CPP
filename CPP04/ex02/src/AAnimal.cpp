/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:21:07 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/13 17:21:45 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>

AAnimal::AAnimal(void)
{
	std::cout <<"AAnimal: default constructor" <<std::endl;
	this->_type = "AAnimal";
	return ;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	std::cout <<"AAnimal: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout <<"AAnimal: destructor" <<std::endl;
	return ;
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout <<"Sound of AAnimal: <void>" <<std::endl;
	return ;
}
