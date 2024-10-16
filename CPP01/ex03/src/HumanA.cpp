/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:18:48 by mchamma           #+#    #+#             */
/*   Updated: 2024/09/18 11:34:24 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &club) :_name(name), _club(club)
{
	std::cout <<this->_name <<" was created with " 
		<<this->_club.getType() <<std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout <<this->_name <<" was destroyed!" <<std::endl;
	return ;
}

void	HumanA::attack(void)
{
	std::cout <<this->_name <<" attacks with their " <<this->_club.getType() <<std::endl;
}