/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:23:14 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:35:14 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::_debug(void)
{
	std::cout <<"[ DEBUG ]" <<std::endl;
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
		<<"ketchup burger." <<std::endl;
	std::cout <<"I really do!" <<std::endl;
}

void	Harl::_info(void)
{
	std::cout <<"[ INFO ]" <<std::endl;
	std::cout <<"I cannot believe adding extra bacon costs more money." <<std::endl;
	std::cout <<"You didn’t put enough bacon in my burger!" <<std::endl;
	std::cout <<"If you did, I wouldn’t be asking for more!" <<std::endl;
}

void	Harl::_warning(void)
{
	std::cout <<"[ WARNING ] " <<std::endl;
	std::cout <<"I think I deserve to have some extra bacon for free." <<std::endl;
	std::cout <<"I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void	Harl::_error(void)
{
	std::cout <<"[ ERROR ]" <<std::endl;
	std::cout <<"This is unacceptable!" <<std::endl;
	std::cout <<"I want to speak to the manager now." <<std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complainPtr[])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complainPtr[i])();
			return ;
		}
	}

	std::cout <<"[ NO LEVEL ]" <<std::endl;
}
