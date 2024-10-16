/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:23:48 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 10:16:57 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	std::cout <<std::endl;
	
	// Animal is abstract, cannot compile
	// const AAnimal* meta = new AAnimal();
	// meta->makeSound();
	// delete meta;
	// std::cout <<std::endl;

	const AAnimal* j = new Dog();
	j->makeSound();
	delete j;
	std::cout <<std::endl;

	const AAnimal* i = new Cat();
	i->makeSound();
	delete i;
	std::cout <<std::endl;

	return (0);
}