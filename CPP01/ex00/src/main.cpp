/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:02:51 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/08 14:06:50 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Stack-allocated objects are automatically destroyed when they go out of scope
	// Heap-allocated objects must be explicity destroyed with command delete.
	
	std::cout <<"\nSTACK 1 - this object is destroyed when the function main ends" <<std::endl;
	Zombie stack1("foo");

	std::cout <<"\nSTACK 2 - this object is destroyed when the function randomChump ends" <<std::endl;
	randomChump("loo");

	std::cout <<"\nHEAP 1 - this object is destroyed with command delete" <<std::endl;
	Zombie *heap1;
	heap1 = newZombie("zoo");
	delete heap1;

	std::cout <<std::endl;

	return (0);
}

