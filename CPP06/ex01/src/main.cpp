/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:41:45 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 11:04:37 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		originalData;
	uintptr_t	Address;
	Data		*deserializedData;

	originalData.Str = "Salve o Corinthians";
	originalData.Char = '!';
	originalData.Int = 10;
	originalData.Float = 42.5f;

	std::cout	<<"str: " <<originalData.Str <<std::endl
				<<"char: " <<originalData.Char <<std::endl		
				<<"int: " <<originalData.Int <<std::endl
				<<"float: " <<originalData.Float <<std::endl;
	std::cout <<std::endl;

	Address = Serializer::serialize(&originalData);
	deserializedData = Serializer::deserialize(Address);
	std::cout <<std::endl;

	std::cout	<<"str: " <<deserializedData->Str <<std::endl
				<<"char: " <<deserializedData->Char <<std::endl		
				<<"int: " <<deserializedData->Int <<std::endl
				<<"float: " <<deserializedData->Float <<std::endl;
	std::cout <<std::endl;

	if (deserializedData == &originalData)
		std::cout << "Deserialization successful!" << std::endl;
	else
		std::cout << "Deserialization failed!" << std::endl;
	std::cout <<std::endl;

	return (0);
}
