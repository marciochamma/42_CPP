/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:12:28 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/13 17:23:01 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"

class Cat: public AAnimal
{
public:
	Cat(void); // default constructor
	Cat(const Cat& copy); // copy constructor
	~Cat(void); // destructor

	Cat&	operator=(const Cat& other);

	void	makeSound(void) const;
};

#endif