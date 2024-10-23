/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 00:19:25 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/18 17:02:10 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): _name("<void>"), _gradeToSign(150), _gradeToExec(150)
{
	this->_signStatus = false;
	std::cout <<"AForm: default constructor" <<std::endl;
	return ;
}

AForm::AForm(const std::string& name, int gradetoSign, int gradeToExec):
	_name(name), _gradeToSign(gradetoSign), _gradeToExec(gradeToExec)
{
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
		throw AForm::GradeTooLowException();
	else if (this->_gradeToSign < 1 || this->_gradeToExec < 1)
		throw AForm::GradeTooHighException();
	else
	{
		this->_signStatus = false;
		std::cout <<"AForm: parameter constructor" <<std::endl;
	}
	return ;
}

AForm::AForm(const AForm& copy):
	_name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec)
{
	this->_signStatus = copy._signStatus;
	std::cout <<"Form: copy constructor" <<std::endl;
	return ;
}

AForm::~AForm(void)
{
	std::cout <<"Form: destructor" <<std::endl;
	return ;
}

AForm&	AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		this->_signStatus = other._signStatus;
	}
	std::cout <<"AForm: assignment operator" <<std::endl;
	return (*this);
}

const std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSignStatus(void) const
{
	return (this->_signStatus);
}

int	AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->getGradeToSign())
		this->_signStatus = true;
	else
		throw AForm::GradeTooLowException();				
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSignStatus())
		throw AForm::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	this->action();
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high for form");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low for form");
}

const char*	AForm::UnsignedException::what() const throw()
{
	return ("form is unsigned");
}

std::ostream&	operator<<(std::ostream& o, const AForm& f)
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