/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:45:10 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 11:05:53 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout <<"Serializer : default constructor" <<std::endl;
	return ;
}

Serializer::Serializer(const Serializer& copy)
{
	*this = copy;
	std::cout <<"Serializer : copy constructor" <<std::endl;
	return ;
}

Serializer::~Serializer(void)
{
	std::cout <<"Serializer : Destructor" <<std::endl;
	return ;
}

Serializer&	Serializer::operator=(const Serializer& other)
{
	(void)other;
	std::cout <<"Serializer : assignment operator" <<std::endl;
	return (*this);
}

// -------------------------------------

uintptr_t	Serializer::serialize(Data* ptr)
{
	std::cout <<"Data serialization complete  - unsigned integer: " 
		<<reinterpret_cast<uintptr_t>(ptr) <<std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	std::cout <<"Data deserialization complete" <<std::endl;
	return reinterpret_cast<Data*>(raw);
}
