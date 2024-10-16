/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:16:20 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/09 08:35:49 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	hey;

	std::cout <<std::endl;
	hey.complain("DEBUG");
	
	std::cout <<std::endl;
	hey.complain("INFO");
	
	std::cout <<std::endl;
	hey.complain("hey hey my my");
	
	std::cout <<std::endl;
	hey.complain("WARNING");
	
	std::cout <<std::endl;
	hey.complain("ERROR");
	
	std::cout <<std::endl;
}