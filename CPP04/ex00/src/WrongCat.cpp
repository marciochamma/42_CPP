/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:08 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 12:51:33 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout <<"WrongCat: default constructor" <<std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout <<"WrongCat: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout <<"WrongCat: destructor" <<std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout <<"Sound of WrongCat: NOT meow" <<std::endl;
	return ;
}