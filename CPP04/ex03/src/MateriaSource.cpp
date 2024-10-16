/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:02:46 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 23:12:50 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	// std::cout <<"MateriaSource: default constructor" <<std::endl;
	for (int i = 0; i < 4; i++)
		this->_buffer[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	// std::cout <<"MateriaSource: copy constructor" <<std::endl;
	for (int i = 0; i < 4; i++)
		this->_buffer[i] = copy._buffer[i];
	return ;
}

MateriaSource::~MateriaSource(void)
{
	// std::cout <<"MateriaSource: destructor" <<std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_buffer[i];
	return ;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_buffer[i];
			this->_buffer[i] = other._buffer[i];
		}
	}
	return (*this);	
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_buffer[i])
		{
			this->_buffer[i] = m;
			std::cout <<"learned: " <<m->getType() <<" pos: " <<i <<std::endl;
			return ;
		}
	}
	std::cout <<m->getType() <<" not learned" <<std::endl;
	delete m;  // Prevent memory leak by deleting the extra Materia
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_buffer[i] && type.compare(this->_buffer[i]->getType()) == 0)
		{
			std::cout <<type <<" materia created" <<std::endl;
			return (this->_buffer[i]->clone());
		}
		
	}
	std::cout <<type <<" materia not created" <<std::endl;
	return (0);
}
