/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:22:56 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 22:52:27 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	// std::cout <<"Ice: default constructor" <<std::endl;
	return ;
}

Ice::Ice(const std::string& type) : AMateria(type)
{
	// std::cout <<"Ice: parameter constructor" <<std::endl;
	this->_type = type;
	return ;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
	// std::cout <<"Ice: copy constructor" <<std::endl;
	this->_type = copy._type;
	return ;
}

Ice::~Ice(void)
{
	// std::cout <<"Ice: destructor" <<std::endl;
	return ;
}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
	{
		AMateria::operator=(other);  // Ensure the AMateria part is copied too
		this->_type = other._type;
	}
	return (*this);
}

Ice*	Ice::clone(void) const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout <<"* shoots an ice bolt at " <<target.getName() <<" *" <<std::endl;
}
