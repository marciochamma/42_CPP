/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:24:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 11:10:27 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog(void); // default constructor
	Dog(const Dog& copy); // copy constructor
	~Dog(void); // destructor

	Dog&	operator=(const Dog& other);

	void	makeSound(void) const;
};

#endif