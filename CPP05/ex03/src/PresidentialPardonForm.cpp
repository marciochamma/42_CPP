/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:07:03 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/18 17:53:52 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("PresidentialPardonForm", 25, 5), _target("<void>")
{
	std::cout <<"PresidentialPardonForm: default constructor" <<std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout <<"PresidentialPardonForm: parameter constructor" <<std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: AForm("PresidentialPardonForm", 25, 5), _target(copy._target)
{
	std::cout <<"PresidentialPardonForm: copy constructor" <<std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout <<"PresidentialPardonForm: destructor" <<std::endl;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	std::cout <<"PresidentialPardonForm: assignment operator" <<std::endl;
	return (*this);
}

void	PresidentialPardonForm::action(void) const
{
	std::cout <<this->_target <<" has been pardoned by Zaphod Beeblebrox" <<std::endl;
}
