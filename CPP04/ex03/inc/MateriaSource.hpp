/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:53:10 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 18:31:28 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_buffer[4];
public:
	MateriaSource(void); //default constructor
	MateriaSource(const MateriaSource& copy); // copy constructor
	virtual ~MateriaSource(void); // destructor

	MateriaSource&	operator=(const MateriaSource& other); // operator= overload

	void		learnMateria(AMateria*);
	AMateria*	createMateria(const std::string& type);
};

#endif