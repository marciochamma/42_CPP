/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:13:04 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/07 14:50:06 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	ph;
	std::string	comm;

	while (42)
	{
		std::cout <<std::endl <<"Enter a command (ADD, SEARCH, EXIT): ";	

		if (!std::getline(std::cin, comm))
		{
			if (std::cin.eof()) 
				std::cout << "\nEOF detected. Exit program!" << std::endl;
			break; 
		}
		
		else if (comm == "ADD")
			ph.add();
	
		else if (comm == "SEARCH")
			ph.search();
	
		else if (comm == "EXIT")
			return(0);
		
		else
			std::cout <<"This command doesn't exist. Try again!" <<std::endl;
	}	
}
