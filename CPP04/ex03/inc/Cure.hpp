/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:43:00 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 22:43:51 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure(void); // default constructor
	Cure(const std::string& type); // parameter constructor
	Cure(const Cure& copy); // copy constructor
	virtual ~Cure(void); // destructor

	Cure&	operator=(const Cure& other); //operator= overload

	Cure*	clone() const;
	void	use(ICharacter& target);
};

#endif
