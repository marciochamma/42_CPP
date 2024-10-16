/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:36:20 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/12 21:21:52 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string		_type;

public:
	WrongAnimal(void); // default constructor
	WrongAnimal(const WrongAnimal& copy); // copy constructor
	~WrongAnimal(void); // destructor

	WrongAnimal&	operator=(const WrongAnimal& other); // Assignment Operator

	std::string		getType(void) const;
	void			makeSound(void) const;

};

#endif