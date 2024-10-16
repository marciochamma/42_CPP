/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:12:10 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/16 11:10:05 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	// std::cout <<"Character: default constructor" <<std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string& name)
{
	// std::cout <<"Character: parameter constructor" <<std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(const Character& copy)
{
	// std::cout <<"Character: copy constructor" <<std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
	return ;
}

Character::~Character(void)
{
	// std::cout <<"Character: destructor" <<std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];

	cleanFloor();
	return ;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i];
		}
	}
	return (*this);	
}

const std::string&	Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	
	if (!m)  // Check if the Materia pointer is valid
	{
		std::cout <<"Invalid Materia" <<std::endl;
		return ;
    }
	
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout <<"added inventory: " <<m->getType() <<" pos: " <<i <<std::endl;
			return ;
		}	
	}
	std::cout <<m->getType() <<" not added to inventory" <<std::endl;
	delete m;
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout <<"Invalid index" <<std::endl;
	else if (!this->_inventory[idx])
		std::cout <<"Inventory empty" <<std::endl;
	else
	{
		if(!dropOnFloor(this->_inventory[idx]))
		{
			std::cout <<"Floor is full. Materia was deleted" <<std::endl;
			delete this->_inventory[idx];	
		}
		this->_inventory[idx] = NULL;
	}
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout <<"Invalid index" <<std::endl;
	else if (!this->_inventory[idx])
		std::cout <<"Inventory empty" <<std::endl;
	else
		this->_inventory[idx]->use(target);
	return ;
}

bool	Character::dropOnFloor(AMateria* m)
{
	for (int i = 0; i < 2; i++)
	{
		if (!this->_floor[i])
		{
			std::cout <<"Materia was dropped on the floor" <<std::endl;
			this->_floor[i] = m;
			return (true);
		}
	}
	return (false);
}

void	Character::cleanFloor(void)
{
	for (int i = 0; i < 2; i++)
	{
		if (this->_floor[i])
		{
			std::cout <<"Materia removed from the floor" <<std::endl;
			delete this->_floor[i];
			this->_floor[i] = NULL;
		}
	}
}
