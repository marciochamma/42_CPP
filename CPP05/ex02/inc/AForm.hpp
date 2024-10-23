/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:54:38 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/18 16:05:26 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_signStatus;
	const int			_gradeToSign;
	const int			_gradeToExec;

public:
	AForm(void); // default constructor
	AForm(const std::string& name, int gradetoSign, int gradeToExec); // parameter constructor
	AForm(const AForm& copy); // copy constructor
	virtual ~AForm(void); // destructor

	AForm&	operator=(const AForm& other);

	const std::string	getName(void) const;
	bool				getSignStatus(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExec(void) const;

	void	beSigned(const Bureaucrat& b);

	void			execute(const Bureaucrat& executor) const;
	virtual void	action(void) const = 0;

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

	class UnsignedException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& o, const AForm& f);

#endif