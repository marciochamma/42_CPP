/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:31:27 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/20 21:36:14 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout <<"Intern: default constructor" <<std::endl;
	return ;
}

Intern::Intern(const Intern& copy)
{
	*this = copy;
	std::cout <<"Intern: copy constructor" <<std::endl;
	return ;
}

Intern::~Intern(void)
{
	std::cout <<"Intern: destructor" <<std::endl;
	return ;
}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;
	std::cout <<"Intern: assignment operator" <<std::endl;
	return (*this);
}

AForm*	Intern::_makePresidentialPardonForm(std::string formTarget)
{
	return (new PresidentialPardonForm(formTarget));
}

AForm*	Intern::_makeRobotomyRequestForm(std::string formTarget)
{
	return (new RobotomyRequestForm(formTarget));
}

AForm*	Intern::_makeShrubberyCreationForm(std::string formTarget)
{
	return (new ShrubberyCreationForm(formTarget));
}

const char*	Intern::FormNameNoExistException::what() const throw()
{
	return ("Intern can't create because the form does't exist");
}

AForm	*Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm* (Intern::*formPtr[3])(std::string) = {&Intern::_makePresidentialPardonForm,
		&Intern::_makeRobotomyRequestForm, &Intern::_makeShrubberyCreationForm};

	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout <<"Intern creates the form " <<formName <<std::endl;
			return (this->*formPtr[i])(formTarget);
		}
	}
	throw Intern::FormNameNoExistException();
}
