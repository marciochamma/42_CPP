/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:27:54 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 11:14:51 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string	_type;

public:
	Animal(void); // default constructor
	Animal(const Animal& copy); // copy constructor
	virtual ~Animal(void); // destructor

	Animal&		operator=(const Animal& other); // Assignment Operator

	std::string		getType(void) const;
	virtual	void	makeSound(void) const;
};

#endif