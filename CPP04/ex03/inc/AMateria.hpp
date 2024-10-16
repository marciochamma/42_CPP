/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:26:20 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 21:32:19 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria(void); // default constructor
	AMateria(const std::string& type); // parameter constructor
	AMateria(const AMateria& copy); // copy constructor
	virtual ~AMateria(void); // destructor

	AMateria&	operator=(const AMateria& other); // operator= overload

	const std::string&	getType(void) const; // returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
