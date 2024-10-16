/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:23:48 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 10:13:28 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout <<std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout <<std::endl;

	delete j;//should not create a leak
	delete i;

	std::cout <<"\n--------------------\n\n";

	Animal*	animal[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 != 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	std::cout <<std::endl;

	for (int i = 0; i < 4; i++)
		animal[i]->makeSound();	

	std::cout <<std::endl;

	for (int i = 0; i < 4; i++)
		delete animal[i];
	
	std::cout <<std::endl;

	std::cout <<"\n--------------------\n\n";

	{
		Dog*	bigDog = new Dog();

		bigDog->setIdea(0, "idea-0");
		std::cout <<bigDog->getIdea(0) <<std::endl;;

		Dog* deepCopyDog = new Dog(*bigDog); 

		delete bigDog;
		
		std::cout <<deepCopyDog->getIdea(0) <<std::endl;;

		std::cout <<std::endl;

		delete deepCopyDog;
	}

	std::cout <<"\n--------------------\n\n";

	Dog*	bigDog = new Dog();

	bigDog->setIdea(0, "idea-0");
	std::cout <<bigDog->getIdea(0) <<std::endl;;

	Dog* deepCopyDog = new Dog();
	
	*deepCopyDog = *bigDog;

	delete bigDog;

	std::cout <<deepCopyDog->getIdea(0) <<std::endl;;
	
	std::cout <<std::endl;
	
	delete deepCopyDog;

	std::cout <<"\n--------------------\n\n";

	Dog firstDog;
	firstDog.setIdea(0, "1st idea -> Woof1");
	firstDog.setIdea(1, "2nd idea -> Woof2");
	firstDog.setIdea(2, "3rd idea -> Woof3");

	std::cout << "Creating deep copies of first dog" << std::endl;
	Dog secondDog(firstDog);
	Dog thirdDog;
	thirdDog = firstDog;

	std::cout << "\n**  Printing ideas of all 3 dogs  **" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout <<"1st Dog - " <<firstDog.getIdea(i) << std::endl;
  	}
	for (int i = 0; i < 3; i++) {
		std::cout <<"2nd Dog - " <<secondDog.getIdea(i) << std::endl;
	}
	for (int i = 0; i < 3; i++) {
		std::cout <<"3rd Dog - " <<thirdDog.getIdea(i) << std::endl;
  	}

	std::cout << "\nChanging idea of second dog to something else" << std::endl;
	secondDog.setIdea(0, "1st idea -> Bark1");
	secondDog.setIdea(1, "2nd idea -> Bark2");
	secondDog.setIdea(2, "3rd idea -> Bark3");

	std::cout << "\nChanging idea of third dog to something else" << std::endl;
	thirdDog.setIdea(0, "1st idea -> blaf-blaf1");
	thirdDog.setIdea(1, "2nd idea -> blaf-blaf2");
	thirdDog.setIdea(2, "3rd idea -> blaf-blaf3");

	std::cout << "\n** Printing ideas of all 3 dogs  **" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout <<"1st Dog - " <<firstDog.getIdea(i) << std::endl;
  	}
	for (int i = 0; i < 3; i++) {
		std::cout <<"2nd Dog - " <<secondDog.getIdea(i) << std::endl;
	}
	for (int i = 0; i < 3; i++) {
		std::cout <<"3rd Dog - " <<thirdDog.getIdea(i) << std::endl;
	}

	return 0;
}
