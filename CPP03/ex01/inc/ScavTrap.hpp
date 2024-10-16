/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:01:08 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 12:52:42 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void); // default constructor
	ScavTrap(const std::string& name); // parameter constructor
	ScavTrap(const ScavTrap& copy); // copy constructor
	~ScavTrap(void); // destructor
	
	ScavTrap&	operator=(const ScavTrap& other); // operator= overload

	void	attack(const std::string& target);
	void	guardGate(void);
};

#endif