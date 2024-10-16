/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:20:30 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/13 17:25:10 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>

class AAnimal
{
protected:
	std::string	_type;

public:
	AAnimal(void); // default constructor
	AAnimal(const AAnimal& copy); // copy constructor
	virtual ~AAnimal(void); // destructor

	AAnimal&		operator=(const AAnimal& other); // Assignment Operator

	std::string		getType(void) const;
	virtual	void	makeSound(void) const = 0; // abstract = pure virtual
};

#endif