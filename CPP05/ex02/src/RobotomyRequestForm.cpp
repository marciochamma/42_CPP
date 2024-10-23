/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:07:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 10:07:10 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", 72, 45), _target("<void>")
{
	std::cout <<"RobotomyRequestForm: default constructor" <<std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout <<"RobotomyRequestForm: parameter constructor" <<std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
	: AForm("RobotomyRequestForm", 72, 45), _target(copy._target)
{
	std::cout <<"RobotomyRequestForm: copy constructor" <<std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout <<"RobotomyRequestForm: destructor" <<std::endl;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	std::cout <<"RobotomyRequestForm: assignment operator" <<std::endl;
	return (*this);
}

void	RobotomyRequestForm::action() const
{
	srand(time(NULL));
	
	std::cout <<"Nhec >> ";
	if (rand() % 2)
		std::cout <<this->_target <<" has been robotomized successfully" <<std::endl;
	else
		std::cout <<"robotomy failed" <<std::endl;
}
