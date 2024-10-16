/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:34:57 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 13:09:02 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	player1("Chewbacca");
	ScavTrap	player2("Han Solo");
	ScavTrap	player3("Stormtrooper");

	std::cout <<std::endl;

	player1.status();
	player2.status();

	player2.attack(player3.getName());
	player3.takeDamage(player2.getAttackDamage());
	player2.beRepaired(25);
	player2.guardGate();

	std::cout <<std::endl;

	player2.status();
	player3.status();

    return (0);
}