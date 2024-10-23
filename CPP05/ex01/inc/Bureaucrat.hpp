/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:10:20 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 09:38:38 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "Form.hpp"
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat(void); // default constructor
	Bureaucrat(const std::string& name, int grade); // parameter constructor
	Bureaucrat(const Bureaucrat& copy); // copy constructor
	~Bureaucrat(void); // destructor

	Bureaucrat&	operator=(const Bureaucrat& other);

	const std::string	getName(void) const;
	int					getGrade(void) const;

	void		incrementGrade(void);
	void		decrementGrade(void);
	void		signForm(Form& f);

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

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& b);

#endif