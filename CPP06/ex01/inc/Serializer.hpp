/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:23:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/23 15:03:42 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <iostream>
#include <stdint.h> // for uintptr_t

struct Data
{
	std::string	Str;
	char		Char;
	int			Int;
	float		Float;
};

class Serializer
{
private:
	Serializer(void); // default constructor
	Serializer(const Serializer& copy); // copy constructor
	~Serializer(void); // destructor
	Serializer&	operator=(const Serializer& other);

public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif