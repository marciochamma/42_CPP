/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:32:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 22:50:33 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	// std::cout <<"AMateria: default constructor" <<std::endl;
	return ;
}

AMateria::AMateria(const std::string& type)
{
	// std::cout <<"AMateria: parameter constructor" <<std::endl;
	this->_type = type;
	return ;
}

AMateria::AMateria(const AMateria& copy)
{
	// std::cout <<"AMateria: copy constructor" <<std::endl;
	this->_type = copy._type;
	return ;
}

AMateria::~AMateria(void)
{
	// std::cout <<"AMateria: destructor" <<std::endl;
	return ;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if(this != &other)
		this->_type = other._type;
	return (*this);
}

const std::string&	AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout <<"Not defined Materia is trying to be "
		<<"used on " <<target.getName() <<std::endl;
}