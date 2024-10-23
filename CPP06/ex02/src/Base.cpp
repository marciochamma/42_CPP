/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:45:10 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 12:29:31 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void)
{
	std::cout <<"Base : Destructor" <<std::endl;
	return ;
}

// -------------------------------------

Base*	generate(void)
{
	srand(time(0));
  	int random = std::rand() % 3;

	switch (random)
	{
	case 0:
		std::cout <<"Generate: A" <<std::endl;
		return (new A());
	case 1:
		std::cout <<"Generate: B" <<std::endl;
		return (new B());
	case 2:
		std::cout <<"Generate: C" <<std::endl;
		return (new C());
	default:
		std::cout <<"Generate: Nothing" <<std::endl;
		return (NULL);
	}
}

void	identify(Base* p)
{
	// When use dynamic_cast with pointers, it returns nullptr if the cast fails
	// Pointers can be nullptr
	
	std::cout <<"Pointer -> ";
	
	if (dynamic_cast<A*>(p))
		std::cout <<"Type: A" <<std::endl;
	
	else if (dynamic_cast<B*>(p))
		std::cout <<"Type: B" <<std::endl;

	else if (dynamic_cast<C*>(p))
		std::cout <<"Type: C" <<std::endl;
	
	else
		std::cout <<"Unknown type" <<std::endl;
}

void	identify(Base& p)
{
	// When use dynamic_cast with references, it throws an exception if cast fails
	// References cannot be null
	
	std::cout <<"Reference -> ";
	
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout <<"Type: A" <<std::endl;
	}
	catch (std::exception& e){}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout <<"Type: B" <<std::endl;
	}
	catch (std::exception& e){}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout <<"Type: C" <<std::endl;
	}
	catch (std::exception& e){}
}