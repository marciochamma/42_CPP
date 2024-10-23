/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:54:38 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 09:34:44 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signStatus;
	const int			_gradeToSign;
	const int			_gradeToExec;

public:
	Form(void); // default constructor
	Form(const std::string& name, int gradetoSign, int gradeToExec); // parameter constructor
	Form(const Form& copy); // copy constructor
	~Form(void); // destructor

	Form&	operator=(const Form& other);

	const std::string	getName(void) const;
	bool				getSignStatus(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExec(void) const;

	void	beSigned(Bureaucrat& b);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& o, const Form& f);

#endif