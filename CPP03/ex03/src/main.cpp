/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:34:57 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 14:27:41 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	player1("Chewbacca");

	std::cout <<std::endl;

	player1.status();
	
	player1.attack("Stormtrooper");
	player1.takeDamage(20);
	player1.beRepaired(30);
	player1.guardGate();
	player1.highFivesGuys();
	player1.whoAmI();

	std::cout <<std::endl;

	player1.status();


    return (0);
}