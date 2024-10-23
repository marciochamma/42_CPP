/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:41:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/18 18:03:34 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	//check ShrubberyCreationForm
	try
	{
		Bureaucrat Tom("Tom", 145);
		Bureaucrat Bob("Bob", 137);

		std::cout <<Bob <<std::endl;
		std::cout <<Tom <<std::endl;

		ShrubberyCreationForm f;
		std::cout <<f <<std::endl;

		Tom.signForm(f);
		std::cout <<f <<std::endl;

		Bob.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	//check PresidentialPardonForm - Fail
	try
	{
		Bureaucrat Tom("Tom", 24);
		Bureaucrat Bob("Bob", 6);

		std::cout <<Bob <<std::endl;
		std::cout <<Tom <<std::endl;

		PresidentialPardonForm f;
		std::cout <<f <<std::endl;

		Tom.signForm(f);
		std::cout <<f <<std::endl;

		Bob.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	//check PresidentialPardonForm - Success
	try
	{
		Bureaucrat Tom("Tom", 24);
		Bureaucrat Bob("Bob", 4);

		std::cout <<Bob <<std::endl;
		std::cout <<Tom <<std::endl;

		PresidentialPardonForm f("Beeblebrox");
		std::cout <<f <<std::endl;

		Tom.signForm(f);
		std::cout <<f <<std::endl;

		Bob.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	//check RobotomyRequestForm - Success
	try
	{
		Bureaucrat Tom("Tom", 72);
		Bureaucrat Bob("Bob", 45);

		std::cout <<Bob <<std::endl;
		std::cout <<Tom <<std::endl;

		RobotomyRequestForm f("Arthur Dent");
		std::cout <<f <<std::endl;

		Tom.signForm(f);
		std::cout <<f <<std::endl;

		Bob.executeForm(f);
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;


	return (0);
}