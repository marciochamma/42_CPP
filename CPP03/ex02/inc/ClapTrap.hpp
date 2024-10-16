/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:35:36 by mchamma           #+#    #+#             */
/*   Updated: 2024/10/10 12:49:03 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap(void); // default constructor
	ClapTrap(const std::string& name); // parametrized constructor
	ClapTrap(const ClapTrap& copy); // copy constructor
	~ClapTrap(void);
	
	ClapTrap&	operator=(const ClapTrap& other); // operator= overload

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			status(void);
	std::string		getName(void) const;
	unsigned int	getAttackDamage(void) const;
};

#endif