/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:34:57 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 13:13:31 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	player1("Stormtrooper");
	FragTrap	player2("Chewbacca");

	std::cout <<std::endl;

	player1.status();
	player2.status();

	player2.attack(player1.getName());
	player1.takeDamage(player2.getAttackDamage());
	player1.beRepaired(25);
	player2.beRepaired(25);
	player2.highFivesGuys();

	std::cout <<std::endl;

	player1.status();
	player2.status();

    return (0);
}