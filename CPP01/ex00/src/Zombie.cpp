/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:49:30 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/08 14:31:14 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(const std::string &name)
{
	_name = name;
	this->announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout <<_name <<" destroyed 💥" <<std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout <<this->_name <<": BraiiiiiiinnnzzzZ..." <<std::endl;
	return ;
}
