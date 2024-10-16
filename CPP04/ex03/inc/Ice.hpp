/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:21:15 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/14 21:33:47 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
	Ice(void); // default constructor
	Ice(const std::string& type); // parameter constructor
	Ice(const Ice& copy); // copy constructor
	virtual ~Ice(void); // destructor

	Ice&	operator=(const Ice& other); //operator= overload

	Ice*	clone() const;
	void	use(ICharacter& target);
};

#endif
