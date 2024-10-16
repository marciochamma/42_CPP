/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:44:19 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 22:51:52 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	// std::cout <<"Cure: default constructor" <<std::endl;
	return ;
}

Cure::Cure(const std::string& type) : AMateria(type)
{
	// std::cout <<"Cure: parameter constructor" <<std::endl;
	this->_type = type;
	return ;
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
	// std::cout <<"Cure: copy constructor" <<std::endl;
	this->_type = copy._type;
	return ;
}

Cure::~Cure(void)
{
	// std::cout <<"Cure: destructor" <<std::endl;
	return ;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
	{
		AMateria::operator=(other);  // Ensure the AMateria part is copied too
		this->_type = other._type;
	}
	return (*this);
}

Cure*	Cure::clone(void) const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout <<"* heals " <<target.getName() <<"’s wounds *" <<std::endl;
}
