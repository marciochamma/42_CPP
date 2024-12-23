/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:36:27 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/18 12:43:56 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
: _name("<void>")
{
	this->_grade = 150;
	std::cout <<"Bureaucrat: default constructor" <<std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else 
	{
		this->_grade = grade;
		std::cout <<"Bureaucrat: parameter constructor" <<std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name)
{
	this->_grade = copy._grade;
	std::cout <<"Bureaucrat: copy constructor" <<std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout <<"Bureaucrat: destructor" <<std::endl;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	std::cout <<"Bureaucrat: assignment operator" <<std::endl;
	return (*this);
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& b)
{
	o <<b.getName() <<", bureaucrat grade " <<b.getGrade() <<".";
	return (o);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}
