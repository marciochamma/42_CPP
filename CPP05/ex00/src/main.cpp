/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:41:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/18 13:06:57 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	// Check default constructor
	{
		Bureaucrat	A;
		std::cout <<A <<std::endl;
	}
	std::cout <<std::endl;

	// Check parameter constructor
	{
		Bureaucrat	A("A", 120);
		std::cout <<A <<std::endl;
	}
	std::cout <<std::endl;

	// Check copy constructor
	{
		Bureaucrat	A("A", 120);
		Bureaucrat	B(A);
		std::cout <<B <<std::endl;
	}
	std::cout <<std::endl;

	// Check assinment operator
	{
		Bureaucrat	A("A", 120);
		Bureaucrat	B;
		B = A;
		std::cout <<B <<std::endl;
	}
	std::cout <<std::endl;
	
	// Check Increment Grade
	try
	{
		Bureaucrat A("A", 9);
		std::cout <<A <<std::endl;

		for (int i = 0; i < 10; i++)
		{
			A.incrementGrade();
			std::cout <<A <<std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	// Check Decrement Grade
	try
	{
		Bureaucrat B("B", 141);
		std::cout <<B <<std::endl;

		for (int j = 0; j < 10; j++)
		{
			B.decrementGrade();
			std::cout <<B <<std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	// Check bureaucrat creation with grade too low
	try
	{
		Bureaucrat C("C", 151);
		std::cout <<C <<std::endl;

		for (int j = 0; j < 10; j++)
		{
			C.decrementGrade();
			std::cout <<C <<std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

    return (0);
}