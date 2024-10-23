/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:41:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 10:24:23 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	std::cout <<std::endl;

	try
	{
		AForm* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
		std::cout <<*ppf <<std::endl;
	
		Bureaucrat Tom("Tom", 24);
		Bureaucrat Bob("Bob", 4);

		std::cout <<Bob <<std::endl;
		std::cout <<Tom <<std::endl;

		Tom.signForm(*ppf);
		std::cout <<*ppf <<std::endl;

		Bob.executeForm(*ppf);
	
		delete ppf;
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	try
	{
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout <<*rrf <<std::endl;
		delete rrf;
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	try
	{
		AForm* scf;
		scf = someRandomIntern.makeForm("shrubbery creation", "yard");
		std::cout <<*scf <<std::endl;
		delete scf;
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	try
	{
		AForm* err;
		err = someRandomIntern.makeForm("42", "student");
		std::cout <<*err <<std::endl;
		delete err;
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	return (0);
}