/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:34:57 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 12:46:49 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap	player1("Chewbacca");
		ClapTrap	player2("Stormtrooper");

		std::cout <<std::endl;

		player1.status();
		
		player1.attack(player2.getName());
		player2.takeDamage(player1.getAttackDamage());
		player1.beRepaired(5);
		
		std::cout <<std::endl;
		player1.status();
	}
	
	std::cout <<"\n----------------------------\n";

	{
		ClapTrap	player3("Han Solo");
		
		player3.status();
		for (int i = 0; i < 12; i++)
		{
			player3.attack("C-3PO");
		}
		player3.status();
	}
	
	return (0);
}