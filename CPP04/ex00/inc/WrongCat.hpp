/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:52:12 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 11:10:15 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat(void); // default constructor
	WrongCat(const WrongCat& copy); // copy constructor
	~WrongCat(void); // destructor

	WrongCat&	operator=(const WrongCat& other);

	void	makeSound(void) const;
};

#endif