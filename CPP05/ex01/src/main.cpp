/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:41:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/21 09:22:12 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	// Check default constructor
	{
		Form	A1;
		std::cout <<A1 <<std::endl;
	}
	std::cout <<std::endl;

	// Check parameter constructor
	{
		Form	A1("A1", 120, 125);
		std::cout <<A1 <<std::endl;
	}
	std::cout <<std::endl;

	// Check copy constructor
	{
		Form	A1("A1", 120, 125);
		Form	B2(A1);
		std::cout <<B2 <<std::endl;
	}
	std::cout <<std::endl;

	// Check assinment operator
	{
		Form	A1("A1", 120, 125);
		Form	B2;
		B2 = A1;
		std::cout <<B2 <<std::endl;
	}
	std::cout <<std::endl;

	// Check Increment Grade
	try
	{
		Bureaucrat A("A", 9);
		std::cout <<A <<std::endl;

		Form A1("A1", 3, 5);
		std::cout <<A1 <<std::endl;

		for (int i = 0; i < 8; i++)
		{
			A.incrementGrade();
			std::cout <<A <<std::endl;
			A.signForm(A1);
		}
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() <<std::endl;
	}
	std::cout <<std::endl;

	return (0);
}