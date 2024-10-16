/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:47:51 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 16:08:35 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) // Default Constructor
{
	std::cout <<"DiamTrap: default constructor" <<std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const std::string& name): 
	ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout <<"DiamTrap: " <<name <<" parameter constructor" <<std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout <<"DiamTrap: copy constructor" <<std::endl;
	this->_name = copy._name;
	*this = copy;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout <<"DiamTrap: " <<this->_name <<" destructor" <<std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout <<"DiamTrap: " <<std::endl;
	std::cout <<"  - The DiamTrap name is: " <<this->_name <<std::endl;
	std::cout <<"  - The ClapTrap name is: " <<ClapTrap::_name <<std::endl;
}
