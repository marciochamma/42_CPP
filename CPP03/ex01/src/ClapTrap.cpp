/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:41:15 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 11:29:25 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout <<"ClapTrap: default constructor" <<std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout <<"ClapTrap: " <<name <<" parameter constructor" <<std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;

}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout <<"ClapTrap: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout <<"ClapTrap: " <<this->_name <<" destructor" <<std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		std::cout <<"ClapTrap: operator= overload" <<std::endl;
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

// -----------------------------------------------------

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout <<"ClapTrap: " <<this->_name
			<<" can't attack, doesn't have hit points (dead)" <<std::endl;
	else if (this->_energyPoints <=0)
		std::cout <<"ClapTrap: " <<this->_name
			<<" can't attack, doesnt have energy points" <<std::endl;
	else
	{
		this->_energyPoints--;
		std::cout <<"ClapTrap: " <<this->_name <<" attacks " <<target <<", causing "
			<<this->_attackDamage <<" points of damage!" <<std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	
	std::cout <<"ClapTrap: " <<this->_name <<" lost " <<amount
		<<" points of damage" <<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout <<"ClapTrap: " <<this->_name 
			<<" can't be repaired, doesn't have hit points (dead)" <<std::endl;
	else if (this->_energyPoints <= 0)
		std::cout <<"ClapTrap: " <<this->_name 
			<<" can't be repaired, doesn't have energy points" <<std::endl;
	else
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout <<"ClapTrap: " <<this->_name <<" was repaired, recovering "
			<<amount <<" hit points back!" <<std::endl;
	}
}

// -----------------------------------------------------

void	ClapTrap::status(void)
{
	std::cout <<"ClapTrap - " <<this->_name <<std::endl;
	std::cout <<" - Hit Point: " <<this->_hitPoints <<std::endl;
	std::cout <<" - Energy Point: " <<this->_energyPoints <<std::endl;
	std::cout <<" - Attack Damange: " <<this->_attackDamage <<std::endl;
	std::cout <<std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}
