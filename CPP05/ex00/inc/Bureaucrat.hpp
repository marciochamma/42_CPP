/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:10:20 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/17 10:04:02 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>

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