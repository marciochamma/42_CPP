/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:31:58 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 12:50:32 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout <<"ScavTrap: default constructor" <<std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	std::cout <<"ScavTrap: " <<name <<" parameter constructor" <<std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	std::cout <<"ScavTrap: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout <<"ScavTrap: " <<this->_name <<" destructor" <<std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

// -----------------------------------------------------

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout <<"ScavTrap: " <<this->_name
			<<" can't attack, doesn't have hit points (dead)" <<std::endl;
	else if (this->_energyPoints <=0)
		std::cout <<"ScavTrap: " <<this->_name
			<<" can't attack, doesnt have energy points" <<std::endl;
	else
	{
		this->_energyPoints--;
		std::cout <<"ScavTrap: " <<this->_name <<" attacks " <<target <<", causing "
			<<this->_attackDamage <<" points of damage!" <<std::endl;
	}
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout <<"ScavTrap: " <<this->_name;
	std::cout <<" is now in Gate keeper mode!" <<std::endl;
	return ;
}