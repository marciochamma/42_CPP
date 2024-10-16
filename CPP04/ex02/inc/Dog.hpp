/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:24:47 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/13 17:23:06 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"

class Dog: public AAnimal
{
public:
	Dog(void); // default constructor
	Dog(const Dog& copy); // copy constructor
	~Dog(void); // destructor

	Dog&	operator=(const Dog& other);

	void	makeSound(void) const;
};

#endif