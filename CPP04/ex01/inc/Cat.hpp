/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:12:28 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/11 17:54:06 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain*	_brain;

public:
	Cat(void); // default constructor
	Cat(const Cat& copy); // copy constructor
	~Cat(void); // destructor

	Cat&	operator=(const Cat& other);

	void		makeSound(void) const;
	std::string	getIdea(int i) const;
	void		setIdea(int i, const std::string newIdea);
};

#endif