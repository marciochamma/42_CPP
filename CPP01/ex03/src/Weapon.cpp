/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 23:03:20 by mchamma           #+#    #+#             */
/*   Updated: 2024/09/18 09:40:57 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string str)
{
	this->setType(str);
	std::cout <<"Weapon created: " <<this->_type <<std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout <<"Weapon destroyed" <<std::endl;
	return ;
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
}

std::string	Weapon::getType(void) const
{
	return (this->_type);
}
