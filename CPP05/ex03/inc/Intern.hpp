/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:19:07 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/20 19:16:28 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <exception>

class Intern
{
private:
	AForm*	_makePresidentialPardonForm(std::string formTarget);
	AForm*	_makeRobotomyRequestForm(std::string formTarget);
	AForm*	_makeShrubberyCreationForm(std::string formTarget);

public:
	Intern(void); // default constructor
	Intern(const Intern& copy); // copy constructor
	virtual ~Intern(void); // destructor

	Intern&	operator=(const Intern& other);

	AForm*	makeForm(std::string formName, std::string formTarget);

	class FormNameNoExistException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif