/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 00:19:25 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 09:34:53 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("<void>"), _gradeToSign(150), _gradeToExec(150)
{
	this->_signStatus = false;
	std::cout <<"Form: default constructor" <<std::endl;
	return ;
}

Form::Form(const std::string& name, int gradetoSign, int gradeToExec):
	_name(name), _gradeToSign(gradetoSign), _gradeToExec(gradeToExec)
{
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
		throw Form::GradeTooLowException();
	else if (this->_gradeToSign < 1 || this->_gradeToExec < 1)
		throw Form::GradeTooHighException();
	else
	{
		this->_signStatus = false;
		std::cout <<"Form: parameter constructor" <<std::endl;
	}
	return ;
}

Form::Form(const Form& copy):
	_name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec)
{
	this->_signStatus = copy._signStatus;
	std::cout <<"Form: copy constructor" <<std::endl;
	return ;
}

Form::~Form(void)
{
	std::cout <<"Form: destructor" <<std::endl;
	return ;
}

Form&	Form::operator=(const Form& other)
{
	if (this != &other)
	{
		this->_signStatus = other._signStatus;
	}
	std::cout <<"Form: assignment operator" <<std::endl;
	return (*this);
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSignStatus(void) const
{
	return (this->_signStatus);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

void	Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() <= this->getGradeToSign())
		this->_signStatus = true;
	else
		throw Form::GradeTooLowException();				
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high for form");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low for form");
}

std::ostream&	operator<<(std::ostream& o, const Form& f)
{
	o <<"The form " <<f.getName();

	if(f.getSignStatus())
		o <<" was signed.";
	else
		o <<" is pending.";
	o <<" The grade to sign is " <<f.getGradeToSign();
	o <<" and to execute is " <<f.getGradeToExec();

	return (o);
}