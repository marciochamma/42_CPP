/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:29:59 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/08 14:55:35 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name) :_name(name)
{
	this->_club = NULL;
	std::cout <<this->_name <<" was created." <<std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout <<this->_name <<" was destroyed!" <<std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->_club = &club;
	std::cout <<this->_name <<" took the " <<this->_club->getType() <<std::endl;
}

void	HumanB::attack(void)
{
	if (this->_club)
		std::cout <<this->_name <<" attacks with their " <<this->_club->getType() <<std::endl;
	else
		std::cout <<this->_name <<" attacks without weapon" <<std::endl;
}