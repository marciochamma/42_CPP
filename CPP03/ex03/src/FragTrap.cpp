/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:22:38 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 13:21:27 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout <<"FragTrap: default constructor" <<std::endl;
	return ;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	std::cout <<"FragTrap: " <<name <<" parameter constructor" <<std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy)
{
	std::cout <<"FragTrap: copy constructor" <<std::endl;
	*this = copy;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout <<"FragTrap: " <<this->_name <<" destructor" <<std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

// -----------------------------------------------------

void	FragTrap::highFivesGuys(void)
{
	std::cout <<"FragTrap: ";
	std::cout <<this->_name <<" request a high five ✋ !!" <<std::endl;
	return ;
}